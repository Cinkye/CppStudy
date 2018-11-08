#include<iostream>
using namespace std;
long long num(int);
int main()
{
    int i = 0;
    cin >> i;
    cout << num(i);
}
long long num(int i)
{
    if(i==1)
        return 3;
    if(i==2)
        return 9;
    if(i>2)
        return 2*num(i-1)+num(i-2);
}
