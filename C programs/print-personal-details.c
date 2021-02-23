#include<stdio.h>

int main()
{
    char name[10], dob[10];
    long long int mobile_number;
    printf("Enter your name :: ");
    scanf("%s",name);
    printf("Enter your date of birth in the format (dd/mm/yyyy) :: ");
    scanf("%s",dob);
    printf("Enter your mobile number :: ");
    scanf("%lld",&mobile_number);
    printf("Hi %s, you were born on %s and your mobile number is %lld",name,dob,mobile_number);
    return 0;

}