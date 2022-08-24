// CPP program to reverse a string with while

#include <iostream>
#include <cstring>
using namespace std;
 

void revStr(string &str)
{
    int len = str.length();
    int n = len-1;
    int i = 0;
	
    while(i<=n)
	{
        
        swap(str[i],str[n]);
        n--;
        i++;
	}
 
}


int main()
{
    string str = "Happy-Birthday";
    reverseStr();
    cout << str;
}

