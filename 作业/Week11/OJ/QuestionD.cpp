//Question D
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a = 1;
    int b = 1;
    int c = 2;
    int counter=3;
    if(n>=1)
        cout << a << "   ";
    if(n>=2)
        cout << b << "   ";
    if(n>=3)
        cout << c << "   ";
    while(counter<n)
    {
        if(counter<=n)
        {
            a = b + c;
            cout << a << "   ";
            ++counter;
            if(counter%5==0)
            cout << endl;
        }
        if(counter<n)
        {
             b = c + a;
            cout << b << "   ";
            ++counter;
            if(counter%5==0)
            cout << endl;
        }
       if(counter<n)
       {
            c = a + b;
            cout << c << "   ";
            ++counter;
            if(counter%5==0)
            cout << endl;
       }

    }
    return 0;
}
