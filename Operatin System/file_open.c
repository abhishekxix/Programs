#include<stdio.h>

#include<fcntl.h>

#include<errno.h>

extern int errno;

int main() {     

    // if file does not have in directory 

    // then file foo.txt is created.

    int fd = open("foo.txt", O_RDONLY | O_CREAT); 

      

    printf("fd = %d", fd);

      

    if (fd ==-1) {

       

        printf("Error Number % d\n", errno); 

          

      

        perror("Program");                 

    }

    return 0;

}