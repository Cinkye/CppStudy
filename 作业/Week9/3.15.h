//Exercise 3.15 Date Class
//2017.10.30
//Date.h
#include<iostream>
using namespace std;

class Date                  //Definition of a class named Date
{
    public:
        Date(int,int,int);
        int getMonth();
        void setMonth(int);
        int getDay();
        void setDay(int);
        int getYear() ;
        void setYear(int);
        void displayDate();
    private:
        int month;
        int day;
        int year;
};
