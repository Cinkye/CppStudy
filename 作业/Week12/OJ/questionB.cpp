#include <iostream>
using namespace std;
int a[7];
int b[7];
int i = 0;
int j = 0;
int c = 0;
int main()
{
    while(i<7)
    {
        cin>>a[i]>>b[i];
        if(i>=1&&(a[i]+b[i])>(c))
        {
            c=a[i]+b[i];
             j = i+1;
        }
        ++i;
    }
    cout << j;
}
