//CPP program to reverse a string with while loop

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char str[200], strTemp[200];
    int len, i=0;
    gets(str);
    cout<<"Enter the String: ";
    while(str[i]!='\0')
        i++;
    len = i;
    strTemp[len] = '\0';
    len--;
    i = 0;
    while(str[i]!='\0')
    {
        strTemp[len] = str[i];
        i++;
        len--;
    }
    i=0;

    while(strTemp[i]!='\0')
    {
        str[i] = strTemp[i];
        i++;
    }
    
    cout<<"\nReverse = "<<str;
    cout<<endl;

}