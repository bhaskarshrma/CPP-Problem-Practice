
// Fibonacci Series up to n number of terms
// C++ program to Display Fibonacci Series

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
  // declare variables
  int n, i, a=0, b=1, c;

  // take input
  cout << "Enter the number of terms: ";
  cin >> n;

  // display Fibonacci Series
  cout << "Fibonacci Series is: " << endl;
  for (i=a; i<=n; i++)
  {
    cout << a << "  ";
    c=a+b;
    a=b;
    b=c;
  }
}
