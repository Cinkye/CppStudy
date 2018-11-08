//Gradebook.h
//Gradebook definition.This file presents Gradebook's public
//interface without revealing the implementations of Gtadebook's member functions, which are defined in Gradebook.cpp
#include <string>
using namespace std;

//Class definition
class GradeBook
{
    public:
        GradeBook(string,string);                                      //Constructor that initialize courseName and instructorName
        string getCourseName();                            //Function that gets the course name
        void setCourseName(string);                     //Function that sets the course name
        void displayMessage();                                //Function that displays a welcome message
        void setInstructorName(string);                 //Function that sets the instructor name
        string getInstructorName();                         //Function that gets the instructor name

    private:
        string courseName;                                      //Course name for this gradebook
        string instructorName;                                  //Instructor name for this course
};
