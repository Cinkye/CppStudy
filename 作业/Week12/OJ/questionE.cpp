#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>> n;
    long a[6];
    int i = 0;
    int j = 0;
    while (i<n)
    {
        while (j<6)
        {
            cin>>a[j];
            ++j;
        }
        j = 0;
        long a1 = ((a[0]+a[3]) + ((a[1]+a[4]) + (a[2]+a[5])/60)/60);
        long a2 = ((a[1]+a[4]) + (a[2]+a[5])/60)%60;
        long a3 = (a[2]+a[5])%60;
        cout << a1 << " " << a2 << " " << a3 << endl;
        ++i;
    }
}
