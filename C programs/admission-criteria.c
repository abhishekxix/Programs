#include<stdio.h>


int main()
{
    int phy,chem,math,total;
    printf("This program is used to tell if a person is eligible for the admission or not.\nEnter the marks in Physics :: ");
    scanf("%d",&phy);
    printf("Enter the marks in Chemistry :: ");
    scanf("%d",&chem);
    printf("Enter the marks in Mathematics :: ");
    scanf("%d",&math);
    total = math + phy + chem;
    if ((total>=180 || (math+phy)>=140 || (math+chem)>=140) && math>=65 && phy>=55 && chem>=50)
    {
        printf("Eligible for admission!");
    }
    else
    {
        printf("Not eligible for admission!");
    }
    return 0;    
}