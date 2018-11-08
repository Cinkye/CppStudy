//Exercise 6.10
//2017.11.23
#include <iostream>
#include <cmath>
using namespace std;

double radius = 0.0;

inline double sphereVolume(double r)
{
    return (4.0/3.0 * 3.14159 * pow(r,3));
}

int main ()
{
    cout << "Please input the radius of the sphere: ";
    cin >> radius;
    cout << "The volume of the sphere is " << sphereVolume(radius) << endl;
    return 0;
}
