//Exercise 4.15 Sales Commission Calculator
//2017.11.5
#include<iostream>
using namespace std;

int main()
{
    float sales = 0.0;

    cout << "Enter sales in dollars (-1 to end):";
    cin >> sales;

    while (sales != -1)
    {
        cout << "Salary is: $" << 200 + sales * 0.09 << endl;
        cout << "\nEnter sales in dollars (-1 to end):";
        cin >> sales;
    }

}
