#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int* list = malloc(3 * sizeof(int));
    if(list == NULL)
    return 1;

    for(int i = 0; i < 3; i++)
    {
        list[i] = i + 1;
    }

    int* tmp = realloc(list, 4 * sizeof(int)); //realloc allocates the chunk of memory according to the size specified and copies the old values into new chunk of memory. It also frees the old chunk of memory.
    if(tmp == NULL)
    return 1;

    tmp[3] = 4;
   
    list = tmp;
    

    for(int i = 0; i < 4; i++)
    {
        printf("%d\n",list[i]);
    }
    free(tmp);
    
    return 0;
}
