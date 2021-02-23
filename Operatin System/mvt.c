#include <stdio.h>

int main(void) {
    int memory_total = 0,
        memory_process = 0,
        memory_remaining = 0, 
        num_process, 
        count = 0, 
        i;

    printf("Enter the memory capacity ->");
    scanf("%d",&memory_total);
    printf("Enter the no of processes -> ");
    scanf("%d",&num_process);
    for(i = 0; i < num_process; i++) {

        printf("\nEnter memory req for process%d: \n",i+1);
        scanf("%d",&memory_process);
        count = count + memory_process;
        
        if(memory_process <= memory_total) {
            if(count == memory_total) {
                printf("There is no further memory remaining.\n");
            }

            else {
                printf(
                    "The memory allocated for process%d is: %d \n",
                    i+1,
                    memory_total
                );

                memory_remaining = memory_total - memory_process;
                
                printf(
                    "\nRemaining memory is: %d\n",
                    memory_remaining
                );

                memory_total = memory_remaining;
            }
        }
        else {
            printf(
                "Memory is not allocated for process%d\n",
                i+1
            );
        }
        
        printf(
            "\nExternal fragmentation for this process is:%d\n",
            memory_remaining
        );
    }

}