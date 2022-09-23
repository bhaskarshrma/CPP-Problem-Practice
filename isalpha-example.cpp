//In this cpp program, I have used a for loop and the isalpha() function 
//to count the number of alphabets in strTest[]

#include <cctype>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main() {
  clock_t tStart= clock();
  char strTest[] = "ad138kw+~!$%?kLo';]qjj#";
  int count = 0, check;

  // loop to count the no. of alphabets in str
  for (int i = 0; i <= strlen(strTest); ++i) 
  {

    // check if str[i] is an alphabet
    check = isalpha(strTest[i]);


  // increment count if str[i] is an alphabet
    if (check)
      ++count;
  }

  cout << "Number of alphabet characters: " << count << endl;
  cout << "Number of non-alphabet characters: " << strlen(strTest) - count;
  
  cout<<"\n________________________________________________\nProgram executed successfully in : "<<
(double)(clock() - tStart)/CLOCKS_PER_SEC<<" sec "<<endl<<"________________________________________________";

}