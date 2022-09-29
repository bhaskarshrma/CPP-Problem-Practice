// define class GradeBook with member function displayMsg()
// create a GradeBook object, and call its displayMsg function.
#include <iostream>

using std::cout;
using std::endl;

//class GradeBook definition
class GradeBook
{
    public:
    // function that displays a welcome message 
    // const tells the compiler, “this function should not modify the object..
    // on which it’s called—if it does, please issue a compilation error.”
    void displayMsg() const
    {
        cout << "Welcome to the gradebook " << endl;
    }

}; // end of class GradeBook

int main()
{
    GradeBook myGradeBook; // object creation 
    myGradeBook.displayMsg(); // call object's displayMsg() function
 
}
