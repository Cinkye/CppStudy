#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
class xy
{
    public:
        int x;
        int y;
        xy(int num)
        {
            transform(num);
        }
        void transform(int num)
        {
            x = num % 5;
            if(x == 0)
                x = 5;
            y = num / 5;
        }
};

int main()
{
    xy x(13);
    cout << x.x << "," << x.y;
}

