#include <iostream>
using namespace std;
int main()
{
    int n;
    int longest = 1;
    int current = 1;
    cin >> n;
    int m[n];
    for(int i = 0;i < n;++i)
    {
        cin >> m[i];
    }
    for(int i = 1;i < n;++i)
    {
        if(m[i] == m[i-1] + 1)
            current++;
        else
        {
            if(current > longest)
                longest = current;
            current = 1;
        }
    }
    cout << longest
}