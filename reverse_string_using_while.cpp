// CPP program to reverse a string with while

#include <iostream>
#include <cstring>
using namespace std;
 

void revStr(string &str) // Function to reverse a string
{
    int len = str.length();
    int n = len-1;
    int i = 0;
	
    while(i<=n)
	{
        
        swap(str[i],str[n]);//Using the swap method to switch values at each index
        n--;
        i++;
	}
 
}


int main()
{
    string str = "Happy-Birthday";
    reverseStr(str);
    cout << str;
}

