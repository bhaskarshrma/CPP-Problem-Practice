// have passed a function pointer as an argument to the function2() function. 
// The address of function1() is provided to the func2() function by the main() method. 
// The function2() function is indirectly invoking the function1() function in this manner.

#include <iostream>  
using namespace std;  
void function1()  
{  
    cout<<"function1 is called";  
}  
void function2(void (*funcptr)())  
{  
    funcptr();  
}  
int main()  
{  
  function2(function1);  
  return 0;  
} 