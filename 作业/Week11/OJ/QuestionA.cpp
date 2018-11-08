#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    double average = 0.0;


    cin >> a >> b >> c;
    average = (static_cast<double>(a) + static_cast<double>(b) + static_cast<double>(c)) / 3;
    //Display the average
    cout << "Average is: " << average << endl;
    return 0;

}
