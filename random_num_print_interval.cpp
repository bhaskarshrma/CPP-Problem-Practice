#include <iostream>

using namespace std;

int main()
{
    int c,num=0;
    for(c=0;c<5000;c++)
    {
        num+=1;
        if(num%3==0 && num%5==0)
        {
             cout << "FizzBuzz" << endl;
        }
         else
           { if(num%3==0)
               {
				   cout << "Fizz" << endl;
				}
				else
				{
					if(num%5==0)
					{
						cout << "Buzz" << endl;
					}
						else
							{
								cout << num << endl;
							}
				}
			}
	}
	return 0;
}
