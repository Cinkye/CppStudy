#pragma once
#include<iostream>
using namespace std;
class Matrix
{
	friend ostream& operator<<(ostream&, const Matrix&);//Overloading Operator <<
	friend istream& operator>>(istream&, Matrix&);//Overloading Operator >>
	friend Matrix operator+(const Matrix&, const Matrix&);//Overloading Operator +
	friend Matrix operator-(const Matrix&, const Matrix&);//Overloading Operator -
	friend Matrix operator*(const Matrix&, const Matrix&);//Overloading Operator *: matrix * matrix
	friend Matrix operator*(const Matrix&, const double);//Overloading Operator *: matrix * number
	friend Matrix operator*(const double, const Matrix&);//Overloading Operator *: number * matrix
	friend bool operator==(const Matrix&, const Matrix&);//Overloading Operator ==
	friend bool operator!=(const Matrix&, const Matrix&);//Overloading Operator !=
public:
	explicit Matrix();//constructor
	void operator+=(Matrix&);//Overloading Operator +=
	void operator-=(Matrix&);//Overloading Operator -=
	void operator*=(Matrix&);//Overloading Operator *=
private:
	double a;
	double b;
	double c;
	double d;
};