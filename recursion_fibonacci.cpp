
// C++ program to Display Fibonacci Series up to n number of terms

#include <iostream>
using std::cout;
using std::cin;

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
}

int fibo (int num)
  {
        if((num==1)||(num==0))
        {
                return(num);
        }
        else
        {
                return(fibo(num-1) + fibo(num-2));
        }
  }

