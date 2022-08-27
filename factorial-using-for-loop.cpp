
#include<iostream>
using namespace std;

int main()
{
  int n, i;
  int fact = 1;
  cout << "Enter a number : " << endl;
  cin >> n;
  for (i = n; i <= 1; i--)
  {
    fact = fact * i;
  }
  cout << "\nThe Factorial of '" << n << "' is -- " << fact << endl;
  
}