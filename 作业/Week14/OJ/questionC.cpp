#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    long n = 0;
    int m = 0;
    int counter = 0;
    while(    cin >> n)
    {
        while(n!=0)
        {
            m = n%2;
            n /=2;
            if(m==1)
                ++counter;
        }
        cout << counter << endl;
        counter = 0;
    }

}
