//CPP Program to print Fibobacci series upto 'n' terms using a class Fibonacci

#include <iostream>
using namespace std;

class Fibonacci
{
public:
    int a, b, c;
    void generate(int);
};

void Fibonacci::generate(int n)  // method definition
{
    a = 0; b = 1;
    cout << a << " " << b;
    for(int i=1; i<= n-2; i++)
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}

int main()
{
    cout << "Hello world! Fibonacci series" << endl;
    cout << "Enter number of items you need in the series: ";
    int n;
    cin  >> n;
    Fibonacci fib1;
    fib1.generate(n);
}