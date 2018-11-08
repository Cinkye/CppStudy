#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double e = 1.0;
    double d = 1;
    for(int i = 1;i <= n;++i)
    {
        d *= (double) i;
        e += 1/d;
    }
    cout << fixed << setprecision(10) << e;
}
