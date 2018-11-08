#include <iostream>
#include <cstdio>

using namespace std;

void hannoi (int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move disk " << n << " from " << A << " to " << C << endl;
    }
    else
    {
        hannoi (n-1, A, C, B);
        cout << "Move disk " << n << " from " << A << " to " << C << endl;
        hannoi (n-1, B, A, C);
    }
}

int main()
{
    int n;
    cin >> n;

    hannoi (n, 'A', 'B', 'C');
    return 0;
}
