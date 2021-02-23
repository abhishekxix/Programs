//Program to print the nth term of an AP and the sum of n terms of AP
#include<iostream>

using namespace std;

int main()
{
    int n, nth_term, sum =0;
    cout<<"Enter the value of n to print the nth term of AP :: ";
    cin>>n;
    nth_term = 5 + (n-1) * 2;
    sum = (n/2) * (5+nth_term);
    cout<<"The nth term of the AP = "<<nth_term<<"\nThe sum of the n terms of the AP = "<<sum;
    return 0;



}