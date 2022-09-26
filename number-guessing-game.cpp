// CPP program to help user guess a number which computer assumed already

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  int secNum=rand() % 50, guess=0;

  do
  {
    cout<<"Guess a number : ";
    cin>>guess;
    if(guess>secNum)
     cout<<"too Big\n";
    if(guess<secNum)
     cout<<"too small\n";

  } while (secNum!=guess);

  cout<<"You got it!!! "<<endl;

}