//Exercise 2.18 Comparing Integers
//2017.10.30
#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter two integers.\n";
    cin >> a >> b;
    if (a>b)
        cout << a << " is larger.\n";
    else if (a<b)
        cout << b << " is larger.\n";
    else
        cout << "These numbers are equal\n";
    cin.get();
    return 0;
}
