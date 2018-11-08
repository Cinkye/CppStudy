//Exercise 7.15
//2017.12.5
#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int q = 0;
    cin >> a[0];
    int counter=1;
    while(cin >> q)
    {
        int c=0;
        for(int i = 0;i<counter;++i)
        {
            if(a[i]!=q)
                ++c;
        }
        if(c==counter)
        {
            a[counter] = q;
            ++counter;
        }
    }
    for(int i = 0;i<counter;++i)
        cout << a[i] << " ";


}
