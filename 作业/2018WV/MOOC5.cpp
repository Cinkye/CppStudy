#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double d;
    cin >> d >> n;
    double sum = 1.0;
    double a = 1;
    for(int i = 1;i <= n;++i)
    {
        a *= d;
        sum += a;
    }
    cout << fixed << setprecision(2) << sum;
}
