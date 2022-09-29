
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class GradeBook
{
    

    public:
    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName() const
    {
        return courseName;
    }

    void displayMsg() const
    {
        cout << "Welcome to GradeBook for : " << getCourseName() << endl;
    }
    
    private:
    string courseName = "Computer Application";
};

int main()
{
    string nameofCourse;
    GradeBook myGradeBook;
    cout << "Initial course name is : " << myGradeBook.getCourseName() << endl;
    cout << "Enter the course name : ";
    getline(cin, nameofCourse);
    myGradeBook.setCourseName(nameofCourse);
    cout << endl;
    myGradeBook.displayMsg();

}
