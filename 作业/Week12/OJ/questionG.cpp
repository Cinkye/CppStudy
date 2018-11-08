#include <iostream>
using namespace std;
int yuan = 0;
int main()
{
    cin >> yuan;
    int a = 0;
    int b = 0;
    int c = 0;
    int counter = 0;
    while (a <= 20)
    {
        ++a;
        while(b <=50)
        {
            ++b;
            while(c<=100)
            {
                ++c;
                if(a*5+b*2+c*1==yuan)
                    ++counter;
            }
            c=0;
        }
        b=0;
    }
    cout << counter;
}
