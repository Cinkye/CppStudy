#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n)
    {
        int a[n][n];
        for(int c = 0;c < n;++c)
            a[0][c] = (c+1) * (c+2) / 2;
        for(int c = 1;c < n;++c)
            for(int d = 0;d < n - c;++d)
            a[c][d] = a[c-1][d+1] - 1;
        for(int c = 0;c < n;++c)
        {
            for(int d = 0;d < n - c - 1;++d)
            cout << a[c][d] << " ";
            cout << a[c][n-c-1] << endl;
        }
    }

}
