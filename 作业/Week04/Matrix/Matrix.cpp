#include "Matrix.h"
#include <iostream>

//Overloaded consructor
Matrix::Matrix()    //Default matrix
{
    a = 1;
    b = 0;
    c = 0;
    d = 1;
}

Matrix::Matrix(double v1,double v2,double v3,double v4)         //User defined matrix
{
    a = v1;
    b = v2;
    c = v3;
    d = v4;
}


//Some basic set and get functions.
double Matrix::GetA()
{
    return a;
}

void Matrix::SetA(double val)
{
    a = val;
}

double Matrix::GetB()
{
    return b;
}

void Matrix::SetB(double val)
{
    b = val;
}

double Matrix::GetC()
{
    return c;
}

void Matrix::SetC(double val)
{
    c = val;
}

double Matrix::GetD()
{
    return d;
}

void Matrix::SetD(double val)
{
    d = val;
}
//End of get and set functions.

//Overloaded operators << and >>
ostream& operator<<( ostream &output, const Matrix &ma)
{
    cout << ma.a << " " << ma.b << "\n" << ma.c << " " << ma.d << endl;
    return output;
}

istream& operator>>(istream &input,Matrix& ma)
{
    input >> ma.a >> ma.b >> ma.c >> ma.d;
    return input;
}

//Overloaded operator +
Matrix Matrix::operator+(Matrix Matrix1)
{
    Matrix sum;
    sum.a = a + Matrix1.a;
    sum.b = b + Matrix1.b;
    sum.c = c + Matrix1.c;
    sum.d = d + Matrix1.d;
    return sum;
}

//Overloaded operator -
Matrix Matrix::operator-(Matrix Matrix1)
{
    Matrix sum;
    sum.a = a - Matrix1.a;
    sum.b = b - Matrix1.b;
    sum.c = c - Matrix1.c;
    sum.d = d - Matrix1.d;
    return sum;
}

//Overloaded operator * with two matrix arguments.
Matrix Matrix::operator*(Matrix Matrix1)
{
    Matrix sum;
    sum.a = a * Matrix1.a + b * Matrix1.c;
    sum.b = a * Matrix1.b + b * Matrix1.d;
    sum.c = c * Matrix1.a + d * Matrix1.c;
    sum.d = c * Matrix1.b + d * Matrix1.d;
    return sum;
}

//Overloaded operator * with an integer argument and a matrix one
Matrix Matrix::operator*(double i)
{
    Matrix sum;
    sum.a = i * a;
    sum.b = i * b;
    sum.c = i * c;
    sum.d = i * d;
    return sum;
}

//Overloaded operators += , -= and *=
Matrix& Matrix::operator+=(Matrix ma)
{
    a += ma.a;
    b += ma.b;
    c += ma.c;
    d += ma.d;
    return *this;
}

Matrix& Matrix::operator-=(Matrix ma)
{
    a -= ma.a;
    b -= ma.b;
    c -= ma.c;
    d -= ma.d;
    return *this;
}

Matrix& Matrix::operator*=(Matrix Matrix1)
{
    double a1 = a;
    double b1 = b;
    double c1 = c;
    double d1 = d;
    a *= a1 * Matrix1.a + b1 * Matrix1.c;
    b *= a1 * Matrix1.b + b1 * Matrix1.d;
    c *= c1 * Matrix1.a + d1 * Matrix1.c;
    d *= c1 * Matrix1.b + d1 * Matrix1.d;
    return *this;
}

//Overloaded operators == and !=
bool Matrix::operator==(Matrix ma)
{
    if(ma.a==a&&ma.b==b&&ma.c==c&&ma.d==d)
        return true;
    else
        return false;
}

bool Matrix::operator!=(Matrix ma)
{
    if(ma.a!=a||ma.b!=b||ma.c!=c||ma.d!=d)
        return true;
    else
        return false;
}
