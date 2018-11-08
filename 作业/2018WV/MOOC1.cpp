#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n = 0.0;
    double y;
    cin >> n;
    if (n>=0 && n<5)
        y = 2.5 - n;
    else if (n>=5 && n<10)
        y = 2 - 1.5 * ( n - 3 ) * ( n - 3 );
    else
        y = n / 2 - 1.5;
    cout << fixed << setprecision(3) << y << setprecision(3);
}
