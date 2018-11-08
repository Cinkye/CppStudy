// Exercise 5.13 Bar Chart
// 2017.11.13
#include<iostream>
using namespace std;

int main()
{
    int counter = 0;
    cout << "Input a number between 1 and 30\n";
    cin >> counter;
    for (;counter > 0;counter--)
        {
            cout << "*";
        }
    return 0;
}
