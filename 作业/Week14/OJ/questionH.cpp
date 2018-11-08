#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a = 0;
    cin >> a;
    char cc;
    for(int j = 0;j<a;++j)
    {
        char b[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int i = 0;i<15;++i)
        {
            cin >> b[i];
        }
        int c=1*(2048%11)+9*(1024%11);
        for(int w = 0;w<6;++w)
        {
            long long k = pow(2,(17-w));
            c+=(b[w]-48)*(k%11);
        }

        for(int w = 6;w<15;++w)
        {
            long long k = pow(2,(15-w));
            c+=(b[w]-48)*(k%11);
        }

        c = c%11;
        if(c==0)
            cc='1';
        if(c==1)
            cc='0';
        if(c==2)
            cc='X';
        if(c==3)
            cc='9';
        if(c==4)
            cc='8';
        if(c==5)
            cc='7';
        if(c==6)
            cc='6';
        if(c==7)
            cc='5';
        if(c==8)
            cc='4';
        if(c==9)
            cc='3';
        if(c==10)
            cc='2';
        for(int i = 0;i <6;++i)
            cout << b[i];
            cout << "19";
        for(int i = 6;i<14;++i)
            cout << b[i];
        cout << b[14] << cc << endl;
    }

}
