#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char password[50];
    int n;
    cin >> n;
    int i = 0;
    while(cin.peek()!=EOF)
    {
        password[i]=96+((getchar()-96+n)%26);
        i++;
    }
    for(int j = 0;j<i;++j)
    {
        cout << password[j];
    }
    return 0;
}

