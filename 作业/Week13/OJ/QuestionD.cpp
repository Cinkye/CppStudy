#include<iostream>
using namespace std;

int main()
{
    int p = 0;
    int q = 0;
    cin >> p >> q;
    int p1 = p;
    int q1 = q;
    while(p1!=q1)
    {
        if(p1>q1)
            p1 = p1-q1;
        if(q1>p1)
            q1 = q1-p1;
    }
    cout << p*q/q1;
}
