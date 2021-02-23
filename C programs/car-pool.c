#include<stdio.h>

int main(void)
{
    float miles, avg, gas_cost, park, toll, total_cost;

    printf("Enter the number of miles driven per day :: ");
    scanf("%f",&miles);

    printf("\nEnter the cost per gallon of gasoline :: ");
    scanf("%f",&gas_cost);

    printf("\nEnter the mileage of your car per gallon :: ");
    scanf("%f",&avg);

    printf("\nEnter the Parking fees per day :: ");
    scanf("%f",&park);

    printf("\nEnter the amount of toll per day :: ");
    scanf("%f",&toll);

    float cost = (miles / avg) * gas_cost ;
    
    total_cost = cost + park + toll;

    printf("\nThe total cost of your driving per day :: $%.2f",total_cost);

    return 0;
}