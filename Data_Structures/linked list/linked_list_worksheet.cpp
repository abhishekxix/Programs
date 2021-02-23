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
    List(int position = 1);
    void insert_element(int number_of_nodes = 1, int data_input = 0);
    void display();
    void input();
    ~List();
};

List::List(int initial_nodes)
    : start {nullptr}, tail {nullptr}, number_of_nodes {} {
    start = tail;
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

void List::insert_element(int position, int data_input) {
    if(position - number_of_nodes > 1)
        return;

    node *temp {start};
    for(int i {}; i < position - 2; i++) {
        temp = temp->link;
    }
    
    node *temp2 = new node;
    temp2->data = data_input;
    temp2->link = temp->link;
    temp->link = temp2;
    
    temp = temp2 = nullptr;
    number_of_nodes++;
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
    int position {};
    std::cout << "Enter a position to enter a new node -> ";
    std::cin >> position;
    int data_input {};
    std::cout << "Enter the data for the new node -> ";
    std::cin >> data_input;
    ll.insert_element(position, data_input);
    ll.display();

    return 0;
}
