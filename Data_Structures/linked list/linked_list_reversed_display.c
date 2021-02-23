#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node;

typedef struct list {
    node *head;
} list;

void create_nodes(list *l, int number_of_nodes) {
    node* temp = NULL;

    for(int i = 0; i < number_of_nodes; i++) {
        if(l->head == NULL) {
            l->head = (node*) malloc(sizeof (node));
            l->head->data = i;
            l->head->link = NULL;
            continue;
        }

        temp = (node*) malloc(sizeof (node));
        temp->link = l->head;
        temp->data = i;
        l->head = temp;
        temp = NULL;
    }
}

void display(list *l) {
    for(node *temp = l->head; temp != NULL; temp = temp->link) {
        printf("%d ", temp->data);
        fflush(stdout);
    }
    printf("\n");
}

void delete(list *l) {
   
   while(l->head != NULL) {
       node *temp = l->head;
       l->head = l->head->link;
       free(temp);
   }

}

void display_reversed(list l) {
    node *current_node = l.head;
    node *next_node = current_node ->link;
    
    while(next_node != NULL) {
        current_node->link = next_node->link;
        next_node->link = l.head;
        l.head = next_node;
        next_node = current_node->link;
    }
    display(&l);
}

int main() {
    list l = {NULL};
    create_nodes(&l, 5);
    display(&l);
    display_reversed(l);
    delete(&l);
    return 0;
}