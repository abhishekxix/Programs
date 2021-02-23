// echo >> appends
// echo > rewrites
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    system("clear");

    char file_name[50] = "sudo touch ", input[70] = "", text[256], input_to_the_file[] = "echo ";
     
    printf("Welcome to notepad by ABHISHEK SINGH!\nEnter the name of the file that you want to create(Do not add any file extension) -> ");

    gets(input);
    strcat(input, ".txt");
    fflush(stdin);

    strcat(file_name, input);

    system(file_name);
    system("clear");

    printf("Now, you can type the text that you want and add it to the file that you have created!\nTo quit, type \"QQQQ\"\n\n");
    do
    {
        gets(text);
        fflush(stdin);
        strcat(input_to_the_file, "\"");
        strcat(input_to_the_file, text);
        strcat(input_to_the_file, "\" >> ");
        strcat(input_to_the_file, input);
        strcpy(input_to_the_file, "echo ");
       
    }while(strcmp(text, "QQQQ") != 0);
    
    return 0;
}