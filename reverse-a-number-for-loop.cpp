// CPP program to reverse a postive number using for loop

#include<iostream>
using namespace std;

int main()
{
    int num, rem, rev;
    cout<<"Enter the Number: ";
    cin>>num;
    for(rev=0; num!=0; num=num/10)
    {
        rem = num%10;
        rev = rem + (rev*10);
    }
    cout<<"\nReverse of entered number : "<<rev;
    cout<<endl;
}