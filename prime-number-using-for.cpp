// CPP program to check prime number using for loop

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num, count=0;
  cout << "Enter a Positive Integer: ";
  cin >> num;

  // check for negative numbers and 1
  if(num<=1) 
  {count++;}
  
  // check for prime
  for (int i=2; i <= num/2; i++)
  {
	  if (num % i == 0)
	   {
         count++;
         break;
		}
  }

  // display result
  if (count == 0)
     cout << "Prime Number." << endl;
  else
     cout << "Not a Prime Number." << endl;
}
