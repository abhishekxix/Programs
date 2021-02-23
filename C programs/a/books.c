//WAP to store information about books using structure and pointers

#include<stdio.h>

typedef struct book
{
    char title[30], author[30];
    float price;
} book;

int main(void)
{
    int n, i;
    printf("Enter the number of books to be stored :: ");
    scanf("%d",&n);

    book b[n], *p;
    p = b;

    for(i = 0; i < n; i++)
    {
        printf("\nBook no. %d ::\n\nEnter the title :: ",i + 1);
        scanf("%s",p->title);
        printf("\nEnter the name of the author :: ");
        scanf("%s",p->author);
        printf("\nEnter the price of the book in INR :: ");
        scanf("%f",&p->price);
        p++;
    }
    printf("\nThe entered books are ::\n");
    p = b;
    for(i = 0; i < n; i++)
    {
         printf("\nBook no. %d ::\nTitle :: ",i + 1);
        printf("%s",p->title);
        printf("\nName of the author :: ");
        printf("%s",p->author);
        printf("\nThe price of the book in INR :: %.2f\n",p->price);
        p++;
   }
   return 0;
}