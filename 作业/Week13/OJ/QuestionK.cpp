#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    cin >> i;
    while(i != 0)
    {
        int a[i] = {};
        int time = 0;
        for (int c = 0;c<i;++c)
            cin >> a[c];
        for (int c = 0;c<i;++c)
        {
            if(c==0)
                time += a[c]*6;
            else if (a[c]>a[c-1])
                time += ((a[c]-a[c-1])*6);
            else
                time += ((a[c-1]-a[c])*4);
        }
        time += i*5;
        cout << time << endl;
        cin >> i;
    }
}
