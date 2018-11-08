//Gradebook.cpp
//Gradebook member-function definitions. This file contains implementations of the member functions prototyped in Gradebook.h
#include <iostream>
#include "3.11.h"
using namespace std;

GradeBook::GradeBook(string cName,string iName)
{
    setCourseName( cName );              //call set function to initialize courseName
    setInstructorName(iName);             //call set function to initialize instructorName
}       //End constructor
void GradeBook::setCourseName(string cName)
{
    courseName = cName;
}       //end function setCourseName
string GradeBook::getCourseName()
{
    return courseName;
}
void GradeBook::setInstructorName(string iName)
{
    instructorName = iName;
}
string GradeBook::getInstructorName()
{
    return instructorName;
}
void GradeBook::displayMessage()
{
    //Call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by" << getInstructorName() << "." << endl;
}// End function displayMessage
