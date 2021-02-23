#include <iostream>
#include <cstdlib>

struct node {
    int data;
    node *link;
};

class List {
private :
    node *start;
    node *tail;
    int number_of_nodes;

public :
    List(int initial_nodes = 0);
    void create_nodes(int number_of_nodes = 1);
    void display();
    void input();
    ~List();
};

List::List(int initial_nodes)
    : start {nullptr}, tail {nullptr}, number_of_nodes {} {
    
    node *temp {nullptr};
    for(int i {}; i < initial_nodes; i++, number_of_nodes++) {
        temp = new node;
        temp->link = nullptr;
        if(number_of_nodes != 0) {
            tail->link = temp;
            tail = tail->link;
        }
        else {
            start = temp;
            tail = temp;
        }
    }
    temp  = nullptr;
}

List::~List() {

    node* current {start};
    node* next;

    for(;current != nullptr;current = next) {
        next = current->link;
        delete current;
        number_of_nodes--;
    }
}

void List::create_nodes(int number_of_nodes) {
    node *temp {nullptr};
    for(int i {}; i < number_of_nodes; i++, this->number_of_nodes++) {
        temp = new node;
        temp->link = nullptr;
        tail->link = temp;
        tail = temp;
    }
    temp = nullptr;
}

void List::display() {
    std::cout << "\n[ ";
    for(node *temp {start}; temp != tail->link; temp = temp->link) {
        std::cout << temp->data << " ";
    }
    std::cout << "]" << std::endl;
}

void List::input() {
    std::cout << "Enter the data for " << number_of_nodes << " nodes -> " << std::endl;
    for(node *temp {start}; temp != tail->link; temp = temp->link) {
        std::cin >> temp->data;
    }
}

int main() {
    int n {};
    std::cout << "How many nodes do you want to create? -> ";
    std::cin >> n;
    List ll {n};
    ll.input();
    ll.display();
    return 0;
}
