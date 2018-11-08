//Exercise 6.12
//2017.11.18
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateCharges();
static double charge = 0.0;
static double hour = 0.0;

int main()
{
    int counter = 1;
    double sumHour = 0.0;
    double sumCharge = 0.0;
    cout << setw(5) << left << "Car" << setw(9) << right << "Hours" << setw(12) << right << "Charge" << endl;
    cout << setw(5) << left << counter;
    while (cin >>setw(5) >> right >> hour)
    {
        cout << "\b\b" << setw(12) << calculateCharges() << endl;
        ++counter;
        sumHour += hour;
        sumCharge += calculateCharges();
        cout << setw(5) << left << counter;
    }
    cout << setw(5) << left << "TOTAL" << setw(9) << right << sumHour << setw(12) << right << sumCharge <<endl;
}

double calculateCharges()
{

    if(hour <= 3)
        charge = 2.00;
    else
        charge = 2.00 + ceil(hour - 3.0) * 0.5;
        return charge;
}
