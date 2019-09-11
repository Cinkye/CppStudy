#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    for(int i = 0;i < n;++i)
    {
        cin >> m;
        if(m % 2 == 0)
            cout << "pb wins" << endl;
        else
            cout << "zs wins" << endl;
    }
        
}