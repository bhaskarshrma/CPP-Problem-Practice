
// CPP Program to demonstrate Default Arguments
//also prints total time taken in execution (in seconds)

#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
 
// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
    return (x + y + z + w);
}

// Driver Code
int main()
{
    int i;
    clock_t tStart = clock();  //storing current clock time
    
    for(i=0;i<=100;i++)
    { if (i%5==0)
       cout<< i<<endl;
    }

    cout<<i<<endl;
    // Statement 1
    cout << sum(10, 15) << endl;

    // Statement 2
    cout << sum(10, 15, 25) << endl;

    // Statement 3
    cout << sum(10, 15, 25, 30) << endl;
    
    //printf("Time taken in execution: %.4fsec\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    cout<<"Time taken in execution: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << " sec";
}
