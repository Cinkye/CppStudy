#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    cin>>i;
    while(i!=0)
    {
        long long a[i+1];
        int j = 2;
        a[0]=1;
        a[1]=1;
        while(j<=i+1)
        {
            a[j]=a[j-1]+a[j-2];
            ++j;
        }
        cout << a[i] << endl;
        cin >> i;
    }
    return 0;

}
