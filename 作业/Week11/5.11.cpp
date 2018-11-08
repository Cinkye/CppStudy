// Exercise 5.11 Compound Interest
//2017.11.13
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double amount;
    double principal = 1000.00;
    int rate;

    //Set floating-point number format
    cout << fixed <<setprecision(2) ;

    //Calculate amount on deposit for each of ten years
    for (rate = 5;rate <= 10;++rate)
    {
        //display headers
        cout << "Years" << setw(40) << "Amount on deposit with rate of " << rate << "%" <<endl;
        for (int year = 1;year <= 10;++year)
        {
            amount = principal * pow(1.0 + static_cast<double>(rate) / 100 , year);
            cout << setw(4) << year << setw(43) << amount << endl;
        }

    }
}
