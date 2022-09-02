//CPP program to print Fibonacci series using recursion

#include <iostream>
using namespace std;

int fibo (int);

int main()
{
        int num,i=0;
        cout<<"\n How many numbers you want for Fibonacci Series : ";
        cin>>num;
        cout<<"\n Fibonacci Series : ";
        while(i<num)
        {
                cout<<" "<< fibo(i);
                i++;
        }

int fibo (num)
  {
        if((num==1)||(num==0))
        {
                return(num);
        }
        else
        {
                return(fibo(num-1)+fibo(num-2));
        }
  }
}