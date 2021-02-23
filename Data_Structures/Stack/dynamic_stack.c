#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void push(struct node** top, int input);
void pop(struct node** top);

int main(void) {
    int choice;
    struct node *top = NULL;
    do {
        printf("1 for push.\n2 for pop.\n-1 for exit\n");
        printf("Enter option: ");
        
        scanf("%d", &choice);
        switch(choice) {
           case 1 : 
               printf("Enter the element you want to push -> ");
               int input = 0;
               scanf("%d", &input);
               push(&top, input);
               break;

            case 2 : {
                if(top == NULL) {
                    printf("Stack underflow.\n");
                    sleep(1);
                }
                else 
                    pop(&top);
                break;
            }
            
            case -1 : {
                printf("Quitting.");
                break;
            }
            default : printf("Invalid choice!");
       }
        system("clear");
       }while(choice != -1);
       
}

void push(struct node **top, int input) {
   
   if((*top) != NULL) {
        struct node *temp = (struct node*) malloc(sizeof (struct node));
        temp -> data = input;
        temp -> link = *top;
        (*top)  = temp;
        temp = NULL;
   }
   else {
       (*top) = (struct node *) malloc(sizeof (struct node));
       (*top) -> data = input;
       (*top) -> link = NULL;
   }
}

void pop(struct node **top) {
    struct node *temp = *top;
    *top = (*top) -> link;
    free(temp);
}  