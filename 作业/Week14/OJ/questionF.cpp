#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    long long n = 0;
    while(cin >> n)
    {
        long long sum = 0;
        long power = 0;
        sum = (n+1)*n/2;
        long long sum2 = 0;
        while(pow(2,power)<=n)
        {
            sum2 += pow(2,power);
            ++power;
        }
        cout << sum - 2 * sum2 << endl;
    }

}
