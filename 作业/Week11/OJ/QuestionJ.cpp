//Question J
#include <iostream>
using namespace std;
int main()
{
    int m = 0;
    int n = 0;
    int i = 0;
    int aver = 0;
    int sum = 0;
    int counter = 0;
    cin >> m;
    while (m>0)
    {
        cin >> n;
        int a[n];
        while (i<n)
        {
            cin >> a[i];
            sum += a[i];
            ++i;
        }
        aver = sum / n;
        i = 0;
        while (i<n)
        {
            if(a[i]>aver)
            ++counter;
            ++i;
        }
        cout << static_cast<double>(counter) / static_cast<double>(n) * 100 << "%" <<endl;
        --m;
        aver = 0;
        i = 0;
        sum = 0;
        counter = 0;
    }

    return 0;
}
