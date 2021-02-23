//insert a new element in an array.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int* list = malloc(3 * sizeof(int));
    if(list == NULL)
    return 1;

    for(int i = 0; i < 3; i++)
    {
        list[i] = i;
    }

    int *tmp = malloc(4 * sizeof(int));
    if(tmp == NULL)
    return 1; //return 1 if no memory has been allocated. That is that the pc ran out of memory.

    for(int i = 0; i < 3; i++)
    {
        tmp[i] = list[i]; //copy the integers from list to tmp.
    }
    tmp[3] = 4;
    free(list);
    list = tmp;
    for(int i = 0; i < 4; i++)
    {
        printf("%i ",list[i]);
    }
 

    return 0;
}