//Exercise 6.19
//2017.11.23
#include<iostream>
#include<cmath>
using namespace std;

double a = 0.0;
double b = 0.0;

double hypotenuse(double,double);

int main()
{
    cout << "Input two sides of the triangle:";
    while (cin >> a >> b)
    {
        cout << "The hypotenuse of the triangle is " << hypotenuse(a,b) << endl << endl;
        cout << "Input two sides of the triangle:";
    }
    return 0;
}

double hypotenuse(double i,double j)
{
    return sqrt(pow(i,2)+pow(j,2));
}
