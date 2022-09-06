// CPP program to reverse a Number using Function

//This program uses a user-defined function named rev() to reverse a number.
//It takes a number as its argument, and returns its reverse.

#include<iostream>
using namespace std;

int rev(int);   // function prototype

int main()
{
    int num, r;
    cout<<"Enter the Number: ";
    cin>>num;
    r = rev(num);   // function calling
    cout<<"\nReverse = "<<r;
    cout<<endl;

}

int rev(int n)    // Function definition
{
    int rem, res=0;
    while(n!=0)
    {
        rem = n%10;
        res = (res*10) + rem;
        n = n/10;
    }
    return res;  // returning a integer
}