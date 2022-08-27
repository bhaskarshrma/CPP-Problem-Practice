// CPP program to show the use of CPP struct

#include <iostream>
#include <string>

using namespace std;

struct movieDetails 
{
  string title;
  int year;
} mine, yours;

void printmovie(movieDetails movie); // function prototype

int main()
{
  mine.title = "Harry Potter and the Philosopher's Stone";
  mine.year = 2001;

  cout << "Enter title: ";
  getline(cin, yours.title);
  cout << "Enter year: ";
  cin >> yours.year;

  cout << "My favorite movie is:\n ";
  printmovie(mine);
  cout << "And yours is:\n ";
  printmovie(yours);
  
}

void printmovie(movieDetails movie) {
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}