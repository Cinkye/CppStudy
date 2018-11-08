#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int limit = 0;
    int counter = 1;
    int a = 0;
    cin >> limit;
    while(counter<=limit)
    {
        a = 0;
        while(a<limit-counter)
        {
             cout << " ";
             ++a;
        }
        a = 0;
        while(a<counter*2-1)
        {
             cout << "*";
             ++a;
        }
        cout << endl;
        ++counter;
    }
    return 0;
}
