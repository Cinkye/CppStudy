//Exercise 2.23 Largest and Smallest Integers
#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cout << "Input five different integers:\n";
    cin >> a >> b >> c >> d >> e;
    int a1 = a;
    int b1 = b;
    int c1 = c;
    int d1 = d;
    int e1 = e;
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    if (a < d)
        a = d;
    if (a < e)
        a = e;
    if (a1 > b1)
        a1 = b1;
    if (a1 > c1)
        a1 = c1;
    if (a1 > d1)
        a1 = d1;
    if (a1 > e1)
        a1 = e1;
    cout << "\nThe largest number is " << a;
    cout << "\nThe smallest number is " << a1;
    cin.get();
    return 0;
}
