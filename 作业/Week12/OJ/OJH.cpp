#include <iostream>
using namespace std;
int n=0;
int main()
{
    while(cin >> n)
    {
            int a[n];
            int b[n];
            int counter = 0;
            int i1 = 0;
            int i2 = 0;
            int j = 30000;
            int k = 30001;
            while (counter < n)
            {
                cin >> a[counter] >> b[counter];
                if (j!=k)
                {
                    if (a[counter]==1||a[counter]==j)
                    {
                        j=b[counter];
                        i1++;
                    }
                    if (a[counter]==2||a[counter]==k)
                    {
                        k=b[counter];
                        i2++;
                    }
                }
                ++counter;
            }
            if (i1>i2)
                cout << "You are my elder" << endl;
            if (i1==i2)
                cout << "You are my brother" << endl;
            if (i1<i2)
                cout << "You are my younger" << endl;
    }
    return 0;
}
