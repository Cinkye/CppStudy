#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    for(int i = 0;i < a;++i)
    cin >> b[i];
    int mi=b[0];
    int ma=b[0];
    for(int i = 0;i < a;++i)
    {
        if(b[i]<mi)
        mi=b[i];
        if(b[i]>ma)
        ma=b[i];
    }
    cout << mi << " " << ma << endl;
}
