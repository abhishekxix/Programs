#include <bits/stdc++.h>


class Binary_Search_Tree {
    public:
        class Node {
            private:
                int data;
                Node *parent;
                Node *left_child;
                Node *right_child;

            public:


                Node(int data = 0, Node *parent = nullptr, Node *left_child = nullptr, Node* right_child = nullptr) 
                    : data {data}, parent {parent}, left_child {left_child}, right_child {right_child}
                {}

                inline int get_key() const {
                    return data;
                }

                inline Node*& get_parent() {
                    return parent;
                }

                inline Node*& get_left() {
                    return left_child;
                }

                inline Node*& get_right() {
                    return right_child;
                }

                inline void set_parent(Node *new_parent) {
                    parent = new_parent;
                }

                inline void set_left(Node *new_left) {
                    left_child = new_left;
                }

                inline void set_right(Node *new_right) {
                    right_child = new_right;
                }
        };
    
    private:
        Node *root;

        void find(int data, Node*& result) {
            Node *temp {root};
            if(temp == nullptr) {
                return;
            }
            while(true) {
                if(temp->get_key() < data) {
                    if(temp->get_right() != nullptr)
                        temp = temp->get_right();
                    else 
                        break;
                } else if(temp->get_key() > data) {
                    if(temp->get_left() != nullptr)
                        temp = temp->get_left();
                    else 
                        break;

                } else {
                    break;
                }
            }
            result = temp;
            temp = nullptr;
        }

        void right_ancestor(Node*& node, Node*& next_elt) {
            next_elt = node->get_parent();
            while(next_elt != nullptr) {
                if(next_elt->get_key() > node->get_key()) {
                    return;
                } else {
                    next_elt = next_elt->get_parent();
                }
            }
        }

        void left_descendant(Node*& node, Node*& next_elt) {
            next_elt = node->get_right();
            while(next_elt->get_left() != nullptr) {
                next_elt = next_elt->get_left();
            }
        }
        
        void left_ancestor(Node*& node, Node*& previous_elt) {
            previous_elt = node->get_parent();
            while(previous_elt != nullptr) {
                if(previous_elt->get_key() < node->get_key()) {
                    return;
                } else {
                    previous_elt = previous_elt->get_parent();
                }
            }
        }

        void right_descendant(Node*& node, Node*& previous_elt) {
            previous_elt = node->get_left();
            while(previous_elt->get_right() != nullptr) {
                previous_elt = previous_elt->get_right();
            }
        }

        int get_smallest() {
            Node* temp = root;
            while(temp->get_left() != nullptr) {
                temp = temp->get_left();
            }
            return temp->get_key();
        }

        /* 
        *This transplant method replaces the target subtree with replacement subtree
        *It does not change the children of any node and it is up to the caller to change them. */
        void transplant(Node*& target, Node*& replacement) {
            if(target->get_parent() == nullptr) {
                this->root = replacement;
            } else if(target == target->get_parent()->get_left()) {
                target->get_parent()->set_left(replacement);
            } else {
                target->get_parent()->set_right(replacement);
            }

            if(replacement != nullptr) {
                replacement->set_parent(target->get_parent());
            }
        }

    public:
        Binary_Search_Tree(Node *root = nullptr) 
            : root {root}
        {}

        Binary_Search_Tree()
            : root {} 
        {}

        Binary_Search_Tree(int data)
            : Binary_Search_Tree(new Node(data))
        {}

        ~Binary_Search_Tree() {
            delete root;
        }

        
        void insert(int data) {
            if(root == nullptr) {
                root = new Node(data);
                return;
            }

            Node *potential_parent = nullptr;
            find(data, potential_parent);
            if(data == potential_parent->get_key()) {
                return;
            }
            if(data > potential_parent->get_key()) {
                potential_parent->set_right(new Node {data, potential_parent});
            } else {
                potential_parent->set_left(new Node {data, potential_parent});                
            }
        }

        void next(int data, Node*& next_elt) {
            Node* node = nullptr;
            find(data, node);
            if(node != nullptr && node->get_key() > data) {
                next_elt = node;
                node = nullptr;
                return;
            }
            if(node->get_right() == nullptr) {
                right_ancestor(node, next_elt);
            } else {
                left_descendant(node, next_elt);
            }
        }

        void previous(int data, Node*& previous_elt) {
            Node* node = nullptr;
            find(data, node);
            if(node != nullptr && node->get_key() < data) {
                previous_elt = node;
                node = nullptr;
                return;
            }

            if(node->get_left() == nullptr) {
                left_ancestor(node, previous_elt);
            } else {
                right_descendant(node, previous_elt);
            }
        }

        std::vector<int> range_search(int start, int end) {
            Node* nextn {};
            std::vector<int> range {};
            if(this->root == nullptr) {
                return std::vector<int> {};
            }
            start = std::max(start, get_smallest());
            for(int i {start - 1}; i < end; i = nextn->get_key()) {
                next(i, nextn);
                if(nextn == nullptr) {
                    break;
                }
                range.push_back(nextn->get_key());
            }
            return range;
        }

        void delete_node(int data) {
            Node* target = nullptr;
            find(data, target);
            if(target == nullptr || data != target->get_key()) {
                return;
            }

            if(target->get_left() == nullptr) {
                transplant(target, target->get_right());
            } else if(target->get_right() == nullptr) {
                transplant(target, target->get_left());
            }
            else {
                Node* replacement = nullptr;
                left_descendant(target, replacement);
                
                if(replacement->get_parent() != target) {
                    transplant(replacement, replacement->get_right());
                    replacement->set_right(target->get_right());
                    replacement->get_right()->set_parent(replacement);
                }
                transplant(target, replacement);
                replacement->set_left(target->get_left());
                replacement->get_left()->set_parent(replacement);
            }

            delete target;
        }
};

int main() {
    Binary_Search_Tree b {5};
    for(int i {}; i < 5; i++) {
        b.insert(i);
    }
    // b.delete_node(1);
    // b.delete_node(2);  

    // Binary_Search_Tree::Node* next_elt {nullptr};
    // b.next(-1, next_elt);
    // if(next_elt != nullptr) {
    //     std::cout << next_elt->get_key() << std::endl;
    // } else {
    //     std::cout << "Not found" << std::endl;
    // }

    std::vector<int> range = b.range_search(-100, 100);
    for(const auto &i : range) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // Binary_Search_Tree::Node* pre = nullptr;
    // b.previous(0, pre);
    // std::cout << pre->get_key() << '\n';

    for(int i {}; i < 6; i++) {
        b.delete_node(i); 
    }

    b.delete_node(6);
    range = b.range_search(-100, 100);
    for(const auto &i : range) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return 0;
}