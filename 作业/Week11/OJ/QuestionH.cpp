//Question H
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    cin >> n;
    int a[n];
    while (i<n)
    {
        cin >> a[i];
        if (pow((a[i]/100),3)+pow((a[i]/10%10),3)+pow((a[i]-a[i]/10*10),3)==a[i])
        {
            cout << "YES";
        }
        ++i;
    }

}
