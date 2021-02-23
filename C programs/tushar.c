#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
  int unit,rate;
  cout<<"\nEnter the units";
  cin>>unit;
  if(unit<=100)
  {rate=unit*5}
  else if(unit>100 && unit<=300)
  {rate=unit*7}
  else if(unit>300)
  {rate=unit*8}
getch();
}