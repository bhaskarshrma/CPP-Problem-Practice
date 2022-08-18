#include<iostream>
using std::cout;
using std::cin;
using std::endl;


void incrementPassByReference(int &var)
{
        var=var+1;
}

int main()
{
        int i = 10;
        cout << "Value of i before increment is : " << i << endl;
        incrementPassByReference(i);
        cout<< "Value of i after increment is : " << i << endl;
}

