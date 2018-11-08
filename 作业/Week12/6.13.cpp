//Exercise 6.13
//2017.11.23
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i = 0.0;
    while (cin >> i)
    {
        cout << "The nearest integer of " << i << " is " << floor(i + 0.5) << endl;
    }
    return 0;
}
