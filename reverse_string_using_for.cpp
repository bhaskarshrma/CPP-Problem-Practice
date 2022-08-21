// CPP program to reverse a string with for loop

#include <iostream>
#include <cstring>

using namespace std;
void revStr(string str) // Function to reverse a string
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main(void)
{
    string s = "Happy-Birthday";
    revStr(s);
    return (0);
}
