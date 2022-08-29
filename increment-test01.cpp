#include <iostream>
using namespace std;

int main()
{
    int num,a=5,b=6,c=2;
    num = (b++) * (++c) - a++;
    cout<< "num = "<<num <<endl;
    cout<< "b = "<<b<<endl;
    cout<<"a = "<<a;
}
