
#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
 

int sum(int x, int y, int z = 0, int w = 0) 
{
    return (x + y + z + w);
}
 

int main()
{
    int i;
    clock_t tStart = clock();  
    
    for(i=0;i<=100;i++)
    { if (i%5==0)
       cout<< i<<endl;
      
    }
    
    cout<<i<<endl;
   
    cout << sum(10, 15) << endl;
   
    
    cout << sum(10, 15, 25) << endl;
   
    
    cout << sum(10, 15, 25, 30) << endl;
    
    //printf("Time taken in execution: %.4fsec\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    cout<<"Time taken in execution: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << " sec";
    
}

