#include <stdio.h>
#include <stdlib.h>

void push(int *stack, int input, int *top);
void pop(int *stack, int *top);

int main(void) {
    int stack[10];
    int choice;
    int top = -1;
    const int max_stack = 10;

    do {
        printf("1 for push.\n2 for pop.\n-1 for exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1 : {
                if(top == max_stack - 1) {
                    printf("Overflow. Stack is full.\n");
                    sleep(1);
                }
                else {
                    printf("Enter the element that you want to push onto the stack -> ");
                    int input = 0;
                    scanf("%d", &input);
                    push(stack, input, &top);
                }
                    break;
            }
            case 2 : {
                if(top == -1) {
                    printf("Underflow, Stack is empty.\n");
                    sleep(1);
                }
                else {
                    pop(stack, &top);
                }
                
                break;
            }
            case -1 : {
                printf("Quitting.");
                break;
            }
            default : printf("Invalid choice!");
    }
    system("clear");
    } while(choice != -1);
}

void push(int *stack, int input, int *top) {
    stack[*top + 1] = input;
    (*top)++;
}

void pop(int *stack, int *top) {
    stack[*top] = 0;
    (*top)--;
}