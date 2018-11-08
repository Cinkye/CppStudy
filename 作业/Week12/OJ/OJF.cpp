#include <iostream>
#include<iomanip>
using namespace std;
int n = 0;
int up = 1;
int down = 1;
int j=1;
int main()
{
    while(cin >> n)
    {
        int a[n];
        a[0]=1;
        for(int i =1;i<=n-1;++i)
        {
            j = 1;
            while(j<=i)
            {
                up*=(n-i+1-j);
                down*=j;
                ++j;
            }
            a[i]=up/down;
            a[n-1]=1;
        }
        for(int i = 1;i<=n;++i)
        {
            cout << setw(i) << a[0];
            int k = 1;int j = 1;
            int n1 = n;
            while(j<=n1-1)
            {
                cout<< " " << a[j];
                ++j;
            }
            --n1;
            cout << endl;
            for(int j = 1;j<=n-1;++j)
            {
                a[j]-=a[j-1];
            }

        }
    }

}
