//C program to show the distance between two cities in various units
#include<stdio.h>

int main()
{
    int distance;
    printf("Enter the distance between two cities in Km :: ");
    scanf("%d",&distance);
    printf("The entered distance between the two cities in \n metres = %.2fm \n centimetres = %.2fcm \n feet = %.2fft \n inches = %.2finches",distance*1000.0,distance*100000.0,distance*3280.8,distance*39369.6);
    return 0;

}