#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void sort(int *,int);
void swap(int *,int ,int);
int main()
{
    int l = 10;
    int a[l];
    for (int i = 0;i < l;++i)
        cin >> a[i];
    for(int i = 0;i < l;++i)
        sort(a,i);
    for(int i = 0;i < l;++i)
        cout << a[i] << endl;
}
void sort(int *aPtr,int m)
{

    int m1 = m;
    int min = m;
    for(;m1<10;++m1)
        if(*(aPtr+m1)<*(aPtr+min))
            min = m1;
    swap(aPtr,m,min);
}
void swap(int *aPtr,int m,int n)
{
    int hold = *(aPtr+m);
    *(aPtr+m) = *(aPtr +n);
    *(aPtr+n) = hold;
}
