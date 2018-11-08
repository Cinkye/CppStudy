#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    int count1 = 1;
    int count2 = 0;
    while(cin >> i >> j)
    {
        int i1 = i;
        int j1 = j;
        if (i > j)
            {
                int a = i;
                i = j;
                j = a;
            }
        while (j >= i )
        {
            int j2 = j;
            while(j2 != 1)
            {
                 if(j2 % 2 == 0)
                {
                    j2 /= 2;
                    ++count1;
                }
                else
                {
                    j2 = j2 * 3 + 1;
                    ++count1;
                }
                if (count1 > count2)
                    count2 = count1;
            }
            count1 = 1;
            --j;
        }
        cout << i1 << " " << j1 << " " << count2 << endl;
        count2 = 0;
    }
}
