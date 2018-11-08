#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int sum1 = 0;
    int sum2 = 0;
    while(cin >> a >> b)
    {
        if (a>b)
        {
            int q = a;
            a = b;
            b = q;
        }
        while (b>=a)
        {
            if (b%2==0)
                sum2 += pow(b,2);
            else
                sum1 += pow(b,3);
            --b;
        }
        cout << sum2 << " " << sum1 << endl;
        sum1 = 0;
        sum2 = 0;
    }

}
