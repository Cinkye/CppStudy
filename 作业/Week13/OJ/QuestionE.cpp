#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    cin >> i;
    int a[i][i];
    for(int c = 0;c < i;++c)
        a[0][c] = c+1;
    for(int c = 1;c < i;++c)
    {
        for(int d = 0;d < i-1;++d)
            a[c][d] = a[c-1][d+1];
        a[c][i-1]=a[c-1][0];
    }
    for(int c = 0;c < i;++c)
        {for(int d = 0;d <i-1;++d)
        cout << a[c][d] << " ";
        cout << a[c][i-1] << endl;}
}
