#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,d;
    char c;
    cin >> a >>b >> c >> d;
    char n[a][b];
    if(d == 0)
    {
        for(int i = 0;i < a;++i)
            for(int j = 0;j<b;++j)
                n[i][j] = ' ';
        for(int i =0;i<b;++i)
        {
            n[0][i] = c;
            n[a-1][i] = c;
        }
        for(int i = 1;i<a-1;++i)
        {
            n[i][0] = c;
            n[i][b-1] = c;
        }
    }
    else
    {
        for(int i = 0;i < a;++i)
            for(int j = 0;j<b;++j)
                n[i][j] = c;
    }
    for(int i = 0;i < a;++i)
        {
            for(int j = 0;j<b;++j)
             cout << n[i][j];
            cout << endl;
        }

}
