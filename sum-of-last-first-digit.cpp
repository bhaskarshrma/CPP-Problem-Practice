// CPP program to find Sum of First and Last Digit using for Loop

// Since for loop also contains initialize and update statements along with condition checking. Therefore, just place any initialization say temp=0 or sum=0 and the update statement as num = num/10

#include <iostream>

using namespace std;
int main()
{
   int num, temp, last, rem, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   for(temp=0; num!=0; num=num/10)
   {
      if(temp==0)
      {
         last = num%10;
         temp++;
      }
      rem = num%10;
   }
   sum = rem + last;
   cout<<"\nSum of First ("<<rem<<") and Last ("<<last<<") Digit = "<<sum;
   cout<<endl;
   
}