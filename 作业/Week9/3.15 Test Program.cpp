//Exercise 3.15 Date class
//2017.10.30
#include<iostream>
#include "3.15.h"
using namespace std;

int main()
{
    //create Date object
    Date date1(10,31,2017);
    Date date2(13,31,2017);

    date1.displayDate();
    cout << endl;
    date2.displayDate();
    cin.get();
    return 0;
}

