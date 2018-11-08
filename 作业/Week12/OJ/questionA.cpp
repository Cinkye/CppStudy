#include <iostream>
using namespace std;
int a(int);
int b[2000];
int n = 0;
int j = 0;
int i = 0;
int main()
{
    cin>>n;
    while (i<n)
    {
        cin >> b[i];
        ++i;
    }
    i = 0;
    cin >>j;
    while (i<n)
    {
        cout << a(b[i]) << " ";
        ++i;
    }
    return 0;
}

int a(int k)
{

    if (i>=j)
        return b[i-j];
    else
        return b[i+n-j];
}
