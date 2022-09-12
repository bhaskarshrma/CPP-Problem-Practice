#include <iostream>  
using namespace std;  
void printname(char *name)  
{  
    std::cout << "Name:" <<name<< std::endl;  
}  
  
int main()  
{  
    char x[30];  // array declaration  
    void (*ptr)(char*);  // function pointer declaration  
    ptr=printname;  // storing the address of printname in ptr.  
    std::cout << "Enter name: " << std::endl;  
    cin>>x;  
    cout<<x<<endl;  
    ptr(x);  // calling printname() function  
   return 0;  
}