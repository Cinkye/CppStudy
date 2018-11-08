// Matrix.cpp: 定义控制台应用程序的入口点。
//

#include <stdafx.h>
#include"Matrix.h"

int main()
{
	Matrix matrix_one;
	Matrix matrix_two;//test for + - *
	Matrix matrix_three;//test for + - *
	Matrix matrix_four;//test for += -= *=
	Matrix matrix_five;//test for == !=
	cout << "test fot << operator and constructor" << endl;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for >> operstor / Please enter matrix_one" << endl;
	cin >> matrix_one;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for + operator / Please enter matrix_two and matrix_three" << endl;
	cout << "matrix_one = matrix_one + matrix_two + matrix_three" << endl;
	cin >> matrix_two >> matrix_three;
	matrix_one = matrix_one + matrix_two + matrix_three;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for - operator / Please enter matrix_two and matrix_three again" << endl;
	cout << "matrix_one = matrix_one - matrix_two - matrix_three" << endl;
	cin >> matrix_two >> matrix_three;
	matrix_one = matrix_one - matrix_two - matrix_three;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for * operator(matrix * matrix) / Please enter matrix_two and matrix_three again" << endl;
	cout << "matrix_one = matrix_one * matrix_two * matrix_three" << endl;
	cin >> matrix_two >> matrix_three;
	matrix_one = matrix_one * matrix_two * matrix_three;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for * operator(matrix * number) / Please enter a number" << endl;
	cout << "matrix_one = matrix_one * number" << endl;
	double number = 0;
	cin >> number;
	matrix_one = matrix_one * number;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for += operator / Please enter matrix_four" << endl;
	cout << "matrix_one += matrix_four" << endl;
	cin >> matrix_four;
	matrix_one += matrix_four;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for -= operator / Please enter matrix_four" << endl;
	cout << "matrix_one -= matrix_four" << endl;
	cin >> matrix_four;
	matrix_one -= matrix_four;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for *= operator / Please enter matrix_four" << endl;
	cout << "matrix_one *= matrix_four" << endl;
	cin >> matrix_four;
	matrix_one *= matrix_four;
	cout << "matrix_one:" << endl << matrix_one << endl;

	cout << "test for == and != operator / Please enter matrix_five" << endl;
	cout << "matrix_one ? matrix_two" << endl;
	cin >> matrix_five;
	if (matrix_one == matrix_five)
		cout << "They are equal." << endl << endl;
	if (matrix_one != matrix_five)
		cout << "They are not equal." << endl << endl;

	cout << "Tests for all functions have done!" << endl;
	return 0;
}

