// CPP program to print size of different data types in bytes

#include<iostream>
using namespace std;

int main()
{
  cout << "Size of following Datatypes in bytes: \n";
  cout << "int : " << sizeof(int) << endl;
  cout << "unsigned int : " << sizeof(unsigned int) << endl;
  cout << "short int : " << sizeof(short int) << endl;
  cout << "long int : " << sizeof(long int) << endl;
  cout << "unsigned short int : " << sizeof(unsigned short int) << endl;
  cout << "unsigned long int : " << sizeof(unsigned long int) << endl;
  cout << "long long int : " << sizeof(long long int) << endl;
  cout << "unsigned long long int : " << sizeof(unsigned long long int) << endl;
  cout << "signed char : " << sizeof(signed char) << endl;

}