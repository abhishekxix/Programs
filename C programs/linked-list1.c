#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node* next;

} node;

int main(void)
{
    //List of size 0
    node *list = NULL;

    //add number to list
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    (*n).number = 1;
    n->next = NULL;
    list = n;

    //Add number to the list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    
    list->next = n;

    //Add number to the list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

//print the list
    for(node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%d\n",tmp->number);
    }
//free list
node *tmp;
while(list != NULL)
{
    tmp = list->next;
    free(list);
    list = tmp;
}
    return 0;
}