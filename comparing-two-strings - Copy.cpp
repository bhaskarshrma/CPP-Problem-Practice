// Compare Two Strings without strcmp()

/*To compare two strings in C++ programming, you have to ask from user to enter the two strings and compare them without using any type of library function like strcmp() as shown in the program */

#include<iostream>
#include<string>

using namespace std;

int main()
{
    char str1[50], str2[50];
    int i=0, chk=0;
	
    cout<<"Enter the First String: ";
    getline(cin,str1);
    cout<<"Enter the Second String: ";
    getline(cin,str2);
	
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if(chk==0)
        cout<<"\nStrings are Equal";
    else
        cout<<"\nStrings are not Equal";
    cout<<endl;

}