#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main(void) {
    struct node* list = malloc(sizeof (struct node));
    list->data = 10;
    struct node* temp = list;
    for(int i = 0; i < 4; i++) {
        temp->next = (struct node*) malloc(sizeof (struct node));
        temp = temp->next;
        temp->data = i;
    }
    temp->next = NULL;

    for(temp = list; temp != NULL;) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}