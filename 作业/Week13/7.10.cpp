//Exercise 7.10
//2017.12.5
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10000];
    int counter = 0;
    int n = 0;
    while(cin >> n)
    {
        a[counter] = 200+0.09*n;
        ++counter;
    }
    int counter2 = 0;
    int b[9];
    while(counter2<counter)
    {
        if (a[counter2]<300&&a[counter2]>=200)
            ++b[0];
        if (a[counter2]<400&&a[counter2]>=300)
            ++b[1];
        if (a[counter2]<500&&a[counter2]>=400)
            ++b[2];
        if (a[counter2]<600&&a[counter2]>=500)
            ++b[3];
        if (a[counter2]<700&&a[counter2]>=600)
            ++b[4];
        if (a[counter2]<800&&a[counter2]>=700)
            ++b[5];
        if (a[counter2]<900&&a[counter2]>=800)
            ++b[6];
        if (a[counter2]<1000&&a[counter2]>=900)
            ++b[7];
        if (a[counter2]>=1000)
            ++b[8];
        ++counter2;
    }
    cout << left << setw(17) << "Ranges" << setw(9) << "Numbers" << endl;
    cout << left << setw(17) << "$200-299" << setw(9) << b[0] <<endl;
    cout << left << setw(17) << "$300-299" << setw(9) << b[1] <<endl;
    cout << left << setw(17) << "$400-299" << setw(9) << b[2] <<endl;
    cout << left << setw(17) << "$500-299" << setw(9) << b[3] <<endl;
    cout << left << setw(17) << "$600-299" << setw(9) << b[4] <<endl;
    cout << left << setw(17) << "$700-299" << setw(9) << b[5] <<endl;
    cout << left << setw(17) << "$800-299" << setw(9) << b[6] <<endl;
    cout << left << setw(17) << "$900-299" << setw(9) << b[7] <<endl;
    cout << left << setw(17) << "$1000 and over" << setw(9) << b[8] <<endl;
}
