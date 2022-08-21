#include <iostream>
using namespace std;
void revStr(string str)
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