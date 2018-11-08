#include <iostream>
using namespace std;

int main()
{
    char a[100000];
    char w;
    int n = 0;
    while(cin >> w)
    {
        if (w == 'E') break;
        a[n++] = w;
    }
    int W = 0;
    int L =0;
    for (int i=0;i < n;i++)
    {
        if (a[i] == 'W')
            ++W;
        if (a[i] == 'L')
            ++L;
        if (W>=11&&W-L>=2||L>=11&&L-W>=2)
        {
            cout << W << ":" << L << endl;
            L = 0;
            W = 0;
        }
    }
    cout << W << ":" << L ;
    cout << endl << endl;
    L = 0;
    W = 0;
    for (int i=0;i < n;i++)
    {
        if (a[i] == 'W')
            ++W;
        if (a[i] == 'L')
            ++L;
        if (W>=21&&W-L>=2||L>=21&&L-W>=2)
        {
            cout << W << ":" << L << endl;
            L = 0;
            W = 0;
        }
    }
    cout << W << ":" << L;
}
