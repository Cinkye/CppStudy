//Exercise 6.18
//2017.11.23
#include<iostream>
using namespace std;

int base = 0;
int power = 0;

int integerPower(int,int);

int main()
{
    cout << "Input the base and power:";
    cin >> base >> power;
    cout << base << " raise to power " << power << " is " << integerPower(base,power) << endl;
    return 0;
}

int integerPower(int a,int b)
{
    if (b == 1)
        return base;
    else
        return base * integerPower(a,b-1);
}
