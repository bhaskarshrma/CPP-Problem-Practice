// Function to check sum of digit using recursion 

#include<iostream> 
using namespace std;

int sum(int n) 
{ 
    if (n == 0) 
       return 0; 
    else
	   return (n % 10 + sum( n / 10 )); 
} 


int main()
{ 
    int num, result;
    cout<< "Enter a number:  \n";
    cin>>num;
    result = sum(num); //calling sum() from inside body of itself
    cout<<"Sum of all digits is: \n"<<result;
    return 0;
} 
