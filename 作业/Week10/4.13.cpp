//Exercise 4.13 Gas Mileage
//2017.11.5
#include<iostream>
using namespace std;

int main()
{
    double miles = 0.0;
    double gallons = 0.0;
    double MPG = 0.0;
    double totalm = 0.0;
    double totalg = 0.0;
    int counter = 0;

    cout << "Enter miles driven (-1 to quit):";
    cin >> miles;

    while (miles != -1)
{
        cout << "Enter gallons used:";
        cin >> gallons;
        MPG = miles / gallons;
        totalm += miles;
        totalg += gallons;
        ++ counter;
        cout << "MPG this trip: " << MPG;
        cout << "\nTotal MPG: " << totalm / totalg;
        cout << "\n\nEnter miles driven (-1 to quit):";
        cin >> miles;

}
    if (counter = 0)
        cout << "No data was entered.";
}
