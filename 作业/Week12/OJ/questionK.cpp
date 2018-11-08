#include<iostream>
using namespace std;
int f(int );
int main()
{
    int i = 0;
    cin>>i;
    while(i!=0)
    {
        cout << f(i) <<endl;
        cin >> i;
    }
    return 0;

}

int f(int i)
{
    if(i==0 || i==1)
        return 1;
    if(i>1)
        return f(i-2) + f(i-1);
}
