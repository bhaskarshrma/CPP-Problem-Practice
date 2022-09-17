#include<iostream>
using namespace std;

int main()
{
  string str, strRev;
  cout<<"Enter a string : "<<endl;
  getline(cin,str);
  
  for(int i=str.size()-1;i>=0;i--)  // reversing the 'str' string
   {
     strRev.push_back(str[i]);
   }

   cout<< strRev;
}