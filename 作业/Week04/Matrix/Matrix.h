#ifndef MATRIX_H
#define MATRIX_H

#include<iostream>
#include<string>
using namespace std;

class Matrix
{

    public:
        Matrix();
        Matrix(double,double,double,double);
        double GetA();
        void SetA(double val);
        double GetB();
        void SetB(double val);
        double GetC();
        void SetC(double val);
        double GetD();
        void SetD(double val);
        friend ostream &operator<<( ostream & ,const Matrix & );
        friend istream& operator>>(istream&,Matrix&);
        Matrix operator+(Matrix);
        Matrix operator-(Matrix);
        Matrix operator*(Matrix);
        Matrix operator*(double);
        Matrix& operator+=(Matrix);
        Matrix& operator-=(Matrix);
        Matrix& operator*=(Matrix);
        bool operator==(Matrix);
        bool operator!=(Matrix);


    private:
        double a;
        double b;
        double c;
        double d;
};

#endif // MATRIX_H
