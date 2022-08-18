#include <iostream>

using namespace std;

int main()
{
	int i, rnum, amount, first, last;
	
    	first=100,last=50000;
    	amount=500;
    	cout<<"\nLst of "<<amount<<" Random Numbers Between "<<first<<" and "<<last<<endl<<endl;
    	srand(time(0));
    	for(i=0; i<amount; i++)
   	 {	
       		rnum = (rand()%(last-first+1)) + first;
        	cout<<i+1<<"). "<<"\t"<<rnum<<endl;
   	 }
    	cout<<endl;
}
