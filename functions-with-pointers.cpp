// CPP program to call the function via the function pointer 

// We define the function printname() in the preceding program, which takes a char pointer as an argument. We declared our function pointer as void (*ptr)(char*).

//We are setting the address of the printname() function to ptr with the expression ptr=printname. We can now use the ptr statement to call the printname() methods. 

#include <iostream>  
using namespace std;  
void printname(char *name)  
{  
    cout << "Name:" <<name<<endl;  
}  
  
int main()  
{  
    char x[30];  // array declaration  
    void (*ptr)(char*);  // function pointer declaration  
    ptr=printname;  // storing the address of printname in ptr.  
    cout << "Enter name: " << endl;  
    cin>>x;  
    cout<<x<<endl;  
    ptr(x);  // calling printname() function  
      
}