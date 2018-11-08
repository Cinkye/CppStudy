//Exercise 2.19 Arithmetic, Smallest and Largest
//2017.10.30
#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {
        //Define variables
        int a = 0;
        int b = 0;
        int c = 0;

        cout << "Input three different integers:";
        cin >> a >> b >> c;
        cout << "Sum is " << a + b + c;
        cout << "\nAverage is " << (a + b + c) / 3;
        cout << "\nProduct is " << a * b * c;
        cout << "\nSmallest is " << min(min (a,b),c);                 //Calculate the smallest number
        cout << "\nLargest is " << max(max (a,b),c);                 //Calculate the largest number
        cin.get();
        return 0;
    }
