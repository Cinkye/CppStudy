#include <iostream>
using namespace std;
int num = 0;
int i = 1;
int main()
{
    int line = 0;
    cin >> line;
    int l = line;
    while(l>0)
    {

        while(i<l)
        {
            if(i = l)
            {
                num=l;
                int nand = 1;
                int k=1;
                while(k<=i)
                {
                    num *= (l-k);
                    nand *= k;
                    ++k;
                }
                cout << num/nand <<endl;
                ++i;
            }
            else
            {
                num=l;
                int nand = 1;
                int k=1;
                while(k<=i)
                {
                    num *= (l-k);
                    nand *= k;
                    ++k;
                }
                cout << num/nand << " " ;
                ++i;
            }
        }
        i=1;
        --l;
    }
}
