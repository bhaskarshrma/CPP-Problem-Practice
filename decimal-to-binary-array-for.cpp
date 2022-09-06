//CPP program to print binary equivalent of entered decimal number using for array

#include <iostream>  
using namespace std; 

int main()  
{  
    int A[20], n, i;    
    cout<<"Enter the number to convert: ";    
    cin>>n;    
    for(i=0; n>0; i++)    // loop to calculate binary equivalent
      {    
        A[i]=n%2;
        n= n/2;
      }
    cout<<"Binary of the given number= ";    // loop to print binary
    for(i=i-1 ;i>=0 ;i--)    
      {
        cout<<A[i];    
      }
}