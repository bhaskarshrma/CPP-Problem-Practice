# CPP program to print random numbers between a particular range

#include <iostream>
using namespace std;

int main()
{
	int i, rnum, amount, first, last;
    cout<<"Enter the Interval: ";
    //first=100,last=5000;
    cin>>first>>last;
    cout<<"How many Random Numbers to Generate ? ";
    cin>>amount;
    //amount=500;
    cout<<"\nLst of "<<amount<<" Random Numbers Between "<<first<<" and "<<last<<endl<<endl;
    srand(time(0));
    for(i=0; i<amount; i++)
    {
       rnum = (rand()%(last-first+1)) + first;
        cout<<i+1<<"). "<<"\t"<<rnum<<endl;
    }
    cout<<endl;
}

