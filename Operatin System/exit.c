#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("this will only print once\n");    
    exit(0);
    printf("hello world!\n");

    return 0;
}