//Exercise 6.22
//2017.11.23
#include<iostream>
using namespace std;

int main()
{
    int side = 0;
    int counter1 = 0;
    int counter2 = 0;
    cin >> side;
    counter1 = side;
    counter2 = side;

    while (counter1 > 0)
    {
        while (counter2 > 0)
        {
            cout << "*";
            --counter2;
        }
        cout << endl;
        --counter1;
        counter2 = side;
    }
    return 0;
}
