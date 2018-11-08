#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sort(double *aPtr,int m,const int *,string *bPtr);
void swapS(string *aPtr,int m,int n);
void swap(double *aPtr,int m,int n);
int main()
{
    int n;
    cin >> n;
    double a[n][3];
    string b[n];
    for(int i = 0;i<n;++i)
    {
        cin >> b[i];
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    double c[n];
    double *cPtr = c;
    string *bPtr = b;
    int *nPtr = &n;
    for(int i = 0;i<n;++i)
        c[i]=a[i][1]*0.4+a[i][2]*0.3+a[i][0]*0.3;
    for(int i = 0;i<n;++i)
        sort(cPtr,i,nPtr,bPtr);
    cout << left <<setw(9)<<"rank"<<left << setw(10) << "name" << right << setw(8) << "score" << endl;;
    for(int i = 0;i<n;++i)

        cout << left <<setw(4)<< i+1 <<right << setw(8) << b[i] << right << setw(15) << fixed << setprecision(1) << c[i]*3 << endl;
}
void sort(double *aPtr,int m,const int *n,string *bPtr)
{

    int m1 = m;
    int min = m;
    for(;m1<*n;++m1)
        if(*(aPtr+m1)>*(aPtr+min))
            min = m1;
    swap(aPtr,m,min);
    swapS(bPtr,m,min);
}
void swapS(string *aPtr,int m,int n)
{
    string hold = *(aPtr+m);
    *(aPtr+m) = *(aPtr +n);
    *(aPtr+n) = hold;
}void swap(double *aPtr,int m,int n)
{
    double hold = *(aPtr+m);
    *(aPtr+m) = *(aPtr +n);
    *(aPtr+n) = hold;
}
