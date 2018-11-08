#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int counter = 0;
    int a = 1;

    cin >> n;
    while (a<=n)
    {
        if (a % 10 == 7 || a % 7 == 0 || (a % 100) / 10 == 7 || (a % 1000) / 100 == 7 || (a % 10000) / 1000 == 7)
            ++counter;
        ++a;
    }
    cout << counter;
    return 0;
}
