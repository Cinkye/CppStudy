//Question B
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int sum = 0;
    cin >> n;
    while (n>0)
    {
        int i = n;
        while (i > 0)
        {
            int a = n;
            a *= i;
            --i;
            sum += a;
        }
    }
    cout << sum <<endl;
    return 0 ;
}
