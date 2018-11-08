#include<iostream>
#include<cmath>
#include <iomanip>
#include<float.h>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    double b[a+2][3];
    for (int i = 0;i < a+2;++i)
        for (int j = 0;j < 3;++j)
            cin >> b[i][j];
    double x = (b[a][0] + b[a+1][0]) * 0.5;
    double y = (b[a][1] + b[a+1][1]) * 0.5;
    double z = (b[a][2] + b[a+1][2]) * 0.5;
    double x1 = 0.0;
    double y1 = 0.0;
    double z1 = 0.0;
    double d = DBL_MAX;
    for (int i = 0;i < a;++i)
        if(pow(x-b[i][0],2)+pow(y-b[i][1],2)+pow(z-b[i][2],2)<=d)
        {
            d = pow(x-b[i][0],2)+pow(y-b[i][1],2)+pow(z-b[i][2],2);
            x1 = b[i][0];
            y1 = b[i][1];
            z1 = b[i][2];
        }
    cout << fixed << setprecision(3) << x1 << " " << setprecision(3) << y1 << " " << setprecision(3) << z1;
    return 0;
}
