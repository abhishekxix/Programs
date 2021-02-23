#include <iostream>
#include <cstdlib>

struct node {
    int data;
    node *right;
    node *left;
};


void delete_tree(node *root); 
void pre_order_traversal(node *root);
void post_order_traversal(node *root);
void in_order_traversal(node *root);
void search(node *root, int key);
void insert_data(node *root, int data);


enum choices {
    CREATE = 1, PREORDER, INORDER, POSTORDER, SEARCH, INSERT,EXIT
};

int main() {
    int ch {};
    int input {};
    node *root {nullptr};
    do {
        std::cout << "Enter :\n" 
              << "1. Create the tree.\n"
              << "2. preorder traversal\n"
              << "3. inorder traversal\n"
              << "4. postorder traversal\n"
              << "5. search\n"
              << "6. insert data\n"
              << "7. exit\n"
              << "enter your choice : ";
        std::cin >> ch;
        
        switch(ch) {
            case CREATE :
            if(root != nullptr) {
                delete_tree(root);
            }
                std::cout << "Enter the data for the root node : ";
                std::cin >> input;
                root = new node {input, nullptr, nullptr};
                break;

            case PREORDER :
                pre_order_traversal(root);
                std::cout << '\n';
                break;

            case INORDER :
                in_order_traversal(root);
                std::cout << '\n';
                break;
            
            case POSTORDER :
                post_order_traversal(root);
                std::cout << '\n';
                break;

            case SEARCH :
                std::cout << "Enter the key to be searched : ";
                std::cin >> input; 
                search(root, input); 
                break;

            case INSERT :
                std::cout << "Enter the data to be inserted : ";
                std::cin >> input;
                insert_data(root, input);
                break;

            case EXIT :
                std::cout << "Exiting....\n";
                break;
            
            default : 
                std::cout << "Invalid input\n";
        }
    } while(ch != EXIT);

    delete_tree(root);
    return 0;
}


void delete_tree(node *root) {
    if(root != nullptr) {
        delete_tree(root->left);
        delete_tree(root->right);
        delete root;
    }
}

void pre_order_traversal(node *root) {
    if(root == nullptr)
        return;
    
    std::cout << root->data << ' ';
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

void post_order_traversal(node *root) {
    if(root == nullptr)
        return;
    
    post_order_traversal(root->left);
    post_order_traversal(root->right);
    std::cout << root->data << ' ';
}

void in_order_traversal(node *root) {
    if(root == nullptr) 
        return;
    
    in_order_traversal(root->left);
    std::cout << root->data << ' ';
    in_order_traversal(root->right);
}

void search(node *root, int key) {
    if(root == nullptr) {
        std::cout << "Not found" << std::endl;
        return;
    }
    if(root->data == key) {
        std::cout << key << "found\n";
        return;
    }
    if(root->data < key)
        search(root->right, key);
    
    if(root->data > key)
        search(root->left, key);
}

void insert_data(node* root, int data) {
    if (root == nullptr) {
        root = new node{data, nullptr, nullptr};
        return;
    } 
  
    if (data <= root->data) 
        insert_data(root->left, data); 
    else if (data > root->data) 
        insert_data(root->right, data);    
}