//CPP prigram to reverse a number using Class
// program uses class and object, an object-oriented feature of C++ to reverse a number given by user

#include<iostream>
using namespace std;

class Num
{
    public:
        int rev(int);
};

int Num::rev(int n)
{
    int rem, res=0;
    while(n!=0)
    {
        rem = n%10;
        res = (res*10) + rem;
        n = n/10;
    }
    return res;
}

int main()
{
    int n, r;
    Num obj1;
    cout<<"Enter the Number: ";
    cin>>n;
    r = obj1.rev(n);
    cout<<"\nReverse = "<<r;
    cout<<endl;

}