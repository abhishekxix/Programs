#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("this will only print once\n");

    //create two processes that run the same program after the fork() call.
    //The first one is called parent process and the other one is caled the child process.
    fork();
    /*Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
    
    printf("hello world!\n");

    return 0;
}