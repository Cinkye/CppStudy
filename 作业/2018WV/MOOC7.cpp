#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long a[n];
    for(int i = 0;i < n;++i)
        cin >> a[i];
    if(n==1)
        cout << "Jolly";
    else
    {
        long b[n-1];
        for(int i = 0;i<n-1;++i)
            b[i]=abs(a[i]-a[i+1]);
        sort(b,b+n-1);
        int j = 0;
        for(int i = 0;i < n-1;++i)
        {
            if(b[i]!=i+1)
            {
                cout << "Not jolly";
                break;
            }
            ++j;
        }
        if(j==n-1)
            cout << "Jolly";
    }
}
