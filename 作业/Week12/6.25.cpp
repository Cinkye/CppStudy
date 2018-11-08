//Exercise 6.25
//2017.11.23
#include <iostream>
using namespace std;

int second(int,int,int);
int a = 0;
int b = 0;
int c = 0;

int main()
{
    while (cin >> a >> b >> c)
    {
        cout << "It has been " << second(a,b,c) << " seconds since that time." << endl << endl;
    }
    return 0;
}

int second(int a,int b,int c)
{
    return (a % 12) * 3600 + (b % 60) * 60 + c;
}
