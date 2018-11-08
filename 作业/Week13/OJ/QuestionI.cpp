#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    cin >> i;
    for(int c = 0;c < i;++c)
    {
        int counter = 0;
        cin >> counter;
        int a[counter];
        int b[counter];
        for(int d = 0;d < counter;++d)
        {
            cin >> a[d] >> b[d];
        }
        int j = 1;
        int k = 0;
        for(int d = 0;d < counter;++d)
            {
                for(int e = 0;e < counter;++e)
                {
                    if(a[e]%2 == 0)
                        a[e] -= 1;
                    if(b[e]%2 != 0)
                        b[e] += 1;
                    if((a[d]>=min(a[e],b[e]) && a[d]<max(a[e],b[e])) || (b[d]>=min(a[e],b[e]) && b[d]<max(a[e],b[e])))
                        ++k;
                }
                if (k > j)
                    j = k;
                    k = 0;
            }
        if(c<i-1)
        cout << j*10 << endl;
        if(c==i-1)
            cout << j*10;
    }
}
