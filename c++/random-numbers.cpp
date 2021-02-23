#include<iostream>
#include<cstdlib>

using namespace std;

int main () 
{
  for (int x = 1; x <= 10; x++) {
  cout << 1 + (rand() % 6) << endl;
  }
  return 0;
}