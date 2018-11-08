//Exercise 2.20 Diameter, Circumference and Area of a Circle
//2017.10.30
#include <iostream>
#define PI 3.14159                  //Define Pi as 3.14159
using namespace std;

int main()
    {
        int radius = 0;
        cout << "Input the radius of the circle:";
        cin >> radius;
        cout << "\nThe diameter of the circle is " << radius * 2;                               //Calculate and print the diameter
        cout << "\nThe circumference of the circle is " << radius * 2 * PI;                //Calculate and print the circumference
        cout << "\nThe area of the circle is " << radius * PI * PI;                               //Calculate and print the area
        cin.get();
        return 0;
    }
