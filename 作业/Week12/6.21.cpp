//Exercise 6.21
//2017.11.23
#include <iostream>
using namespace std;

int a = 0;

string isEven(int);

int main()
{
    cout << "Input a integer: ";
    while (cin >> a)
    {
        cout << isEven(a) << endl << endl;
        cout << "Input a integer: ";
    }
    return 1;
}

string isEven(int i)
{
    if (i % 2 == 0)
        return "true";
    else
        return "false";
}
