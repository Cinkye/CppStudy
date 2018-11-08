#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sort(int *,int,int *);
void swap(int *,int ,int);
int main()
{
    int l = 10;
    int a[l];
    int b[l];
    for (int i = 0;i < l;++i)
        cin >> a[i];
    for (int i = 0;i < l;++i)
        b[i] = i+1;
    for(int i = 0;i < l;++i)
        sort(a,i,b);
    for(int i = 0;i < l-1;++i)
        cout << a[i] << " ";
    cout << a[9] << endl;
    for(int i = 0;i < l-1;++i)
        cout << b[i] << " ";
    cout << b[9] << endl;
}
void sort(int *aPtr,int m,int *b)
{

    int m1 = m;
    int min = m;
    for(;m1<10;++m1)
        if(*(aPtr+m1)<*(aPtr+min))
            min = m1;
    swap(aPtr,m,min);
    swap(b,m,min);
}
void swap(int *aPtr,int m,int n)
{
    int hold = *(aPtr+m);
    *(aPtr+m) = *(aPtr +n);
    *(aPtr+n) = hold;
}
