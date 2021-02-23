#include <stdio.h>

struct address 
{
    int house_number;
    char complete_address[100];
};

struct person
{
    char name[30];
    int age;
   struct address a;
};

int main(void)
{
    struct person p1;

    printf("Enter your name :: ");
    gets(p1.name);
    fflush(stdin);
    printf("Enter your age :: ");
    scanf("%d", p1.age);

    printf("Enter your address ::\nEnter the house number :: ");
    scanf("%d",p1.a.house_number);

    printf("\nEnter the complete address :: ");
    gets(p1.a.complete_address);

    return 0;
}