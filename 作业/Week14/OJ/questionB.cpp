#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int output(int,int);
int main()
{
    int a = 0;
    cin >> a;
    int b[a][2];
    for(int i = 0;i < a;++i)
    {
        cin >> b[i][0] >> b[i][1];
        cout << output(b[i][0],b[i][1]) << endl;
    }

}
int output(int m,int n)
{
    if((m==1)&&(n!=1))
        return n;
    if((n==1)&&(m!=1))
        return m;
    if((n==1)&&(m==1))
        return 1;
    if((m!=1)&&(n!=1))
        return output(m-1,n)+output(m,n-1);

}
