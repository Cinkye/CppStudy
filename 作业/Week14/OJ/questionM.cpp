#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n)
    {
        long long q = 1;
        int e = 1;
        while(q%n!=0)
        {
            q = q*10+1;
            e++;
        }
        cout << e << endl;
    }

}
