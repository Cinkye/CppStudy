#include <iostream>
#include <string>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix a;                                                                        //Testing default constructor
    Matrix b(1,2,3,4);                                                          //Testing constructor with user defined
    cout << a << b << endl;
    cin >> a >> b;                                                              //Testing operator >>
    cout << a << b;                                                           //Testing operator <<
    cout << "a.a = " << a.GetA() << endl;                       //Testing get function
    a.SetB(12);                                                                     //Testing set function
    cout << "a.b = " << a.GetB() << endl;
    Matrix c = a + b;                                                           //Testing operator +
    cout << a << b << "a + b = \n" << c << endl;
    c = a - b;                                                                       //Testing operator -
    cout << a << b << "a - b = \n" << c << endl;
    c = a * b;                                                                       //Testing operator * with two matrix arguments
    cout << a << b << "a * b = \n" << c << endl;
    c = a * 3.0;                                                                    //Testing operator * with an integer argument and a matrix argument
    cout << "a * 3 = \n" << c << endl;
    cout <<"a = \n" << a << " b = \n" << b << " c = \n" << c << endl;
    c += a;                                                                         //Testing operator +=
    cout << "c = " << c << " after c+=a" << endl;
    c -= b;                                                                         //Testing operator -=
    cout << "c = " << c << " after c-=b" << endl;
    c *= a;                                                                         //Testing operator *=
    cout << "c = " << c << " after c*=a" << endl;
    a = a - a;                                                                    //Testing operators == and !=
    b = b - b;
    cout << "a == b = " << (a==b) << endl;
    cout << "a != c = " << (a!=c) << endl;

}
