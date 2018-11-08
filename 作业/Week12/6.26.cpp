//Exercise 6.26
//2017.11.23
#include<iostream>
#include<iomanip>
using namespace std;

double celsius(int);
double fahrenheit(int);
int c = 0;
int f = 32;

int main()
{
    cout << setw(7) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    while(c <= 100)
    {
        cout << setw(7) << c <<setw(15) << fahrenheit(c) << endl;
        ++c;
    }
    cout << endl;
    cout << setw(10) << "Fahrenheit" << setw(11) << "Celsius" << endl;
    while(f <= 212)
    {
        cout << setw(10) << f << setw(11) << celsius(f) << endl;
        ++f;
    }
}

double celsius(int f)
{
    return (f - 32) / 1.8;
}

double fahrenheit(int c)
{
    return c * 1.8 +32;
}
