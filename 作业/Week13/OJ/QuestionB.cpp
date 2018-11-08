#include<iostream>
using namespace std;
int counter(int);
int main()
{
    int n = 0;
    cin >> n;
    while(n!=0)
    {
        cout << counter(n) << endl;
        cin >> n;
    }
}

int counter(int a)
{
    if (a == 1)
        return 1;
    if (a == 2)
        return 2;
    if (a == 3)
        return 4;
    if (a > 3)
        return counter(a-1)+counter(a-2)+counter(a-3);
}
