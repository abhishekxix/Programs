#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("this will only print once\n");

    //create two processes that run the same program after the fork() call.
    //The first one is called parent process and the other one is caled the child process.
    /* int pid =  */fork();
    
    printf("hello world!\n");
    // if(pid == 0) {
        printf("The pid of the current process is : %d, %d\n", getpid(), getppid());
    // }
    printf("\n");
    return 0;
}