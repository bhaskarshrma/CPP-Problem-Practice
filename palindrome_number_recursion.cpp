// Recursive C++ program to check if entered number is palindrome or not 

#include <iostream> 
using namespace std; 
 
int rev(int n, int temp) 
{ 
    if (n == 0)
      return temp; 
		 
	else
      {
	    temp = (temp * 10) + (n % 10);  // stores the reverse of a number
        return rev(n/10, temp); //recursive call 
      }
}


int main()
{   
    int n,temp;
	cout<<"Enter a number:\n";
	cin>>n;
    temp = rev(n, 0);   //function call
	
    if (temp == n)
	{cout << "\nYes number is a Palindrome" ;}
	
    else
	{cout << "\nNo number is not a Palindrome" ;}
    return 0;
}

