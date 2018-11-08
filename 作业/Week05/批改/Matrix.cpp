#include"stdafx.h"
#include"Matrix.h"
ostream& operator<<(ostream& output, const Matrix& matrix)//Overloading Operator <<
{
	cout << matrix.a << "  " << matrix.b << endl;
	cout << matrix.c << "  " << matrix.d << endl;
	return output;
}
istream& operator>>(istream& input, Matrix& matrix)//Overloading Operator >> 
{
	cin >> matrix.a >> matrix.b >> matrix.c >> matrix.d;
	return input;
}
Matrix operator+(const Matrix& matrix_one, const Matrix& matrix_two)//Overloading Operator +
{
	Matrix matrix_temp;
	matrix_temp.a = matrix_one.a + matrix_two.a;
	matrix_temp.b = matrix_one.b + matrix_two.b;
	matrix_temp.c = matrix_one.c + matrix_two.c;
	matrix_temp.d = matrix_one.d + matrix_two.d;
	return matrix_temp;
}
Matrix operator-(const Matrix& matrix_one, const Matrix& matrix_two)//Overloading Operator -
{
	Matrix matrix_temp;
	matrix_temp.a = matrix_one.a - matrix_two.a;
	matrix_temp.b = matrix_one.b - matrix_two.b;
	matrix_temp.c = matrix_one.c - matrix_two.c;
	matrix_temp.d = matrix_one.d - matrix_two.d;
	return matrix_temp;
}
Matrix operator*(const Matrix& matrix_one, const Matrix& matrix_two)//Overloading Operator *: matrix * matrix
{
	Matrix matrix_temp;
	matrix_temp.a = matrix_one.a*matrix_two.a + matrix_one.b*matrix_two.c;
	matrix_temp.b = matrix_one.a*matrix_two.b + matrix_one.b*matrix_two.d;
	matrix_temp.c = matrix_one.c*matrix_two.a + matrix_one.d*matrix_two.c;
	matrix_temp.d = matrix_one.c*matrix_two.b + matrix_one.d*matrix_two.d;
	return matrix_temp;
}
Matrix operator*(const Matrix& matrix, double i)//Overloading Operator *: matrix * number
{
	Matrix matrix_temp;
	matrix_temp.a = matrix.a * i;
	matrix_temp.b = matrix.b * i;
	matrix_temp.c = matrix.c * i;
	matrix_temp.d = matrix.d * i;
	return matrix_temp;
}
Matrix operator*(double i, const Matrix& matrix)//Overloading Operator *: matrix * number
{
	Matrix matrix_temp;
	matrix_temp.a = matrix.a * i;
	matrix_temp.b = matrix.b * i;
	matrix_temp.c = matrix.c * i;
	matrix_temp.d = matrix.d * i;
	return matrix_temp;
}
bool operator==(const Matrix& matrix_one, const Matrix& matrix_two)//Overloading Operator ==
{
	if (matrix_one.a == matrix_two.a&&matrix_one.b == matrix_two.b&&matrix_one.c == matrix_two.c&&matrix_one.d == matrix_two.d)
		return true;
	return false;
}
bool operator!=(const Matrix& matrix_one, const Matrix& matrix_two)//Overloading Operator !=
{
	if (!(matrix_one == matrix_two))
		return true;
	return false;
}
Matrix::Matrix()//constructor
{
	a = 1;
	b = 0;
	c = 0;
	d = 1;
}
void Matrix::operator+=(Matrix& matrix)//Overloading Operator +=
{
	(*this) = (*this) + matrix;
}
void Matrix::operator-=(Matrix& matrix)//Overloading Operator -=
{
	(*this) = (*this) - matrix;
}
void Matrix::operator*=(Matrix& matrix)//Overloading Operator *=
{
	(*this) = (*this) * matrix;
}