//Exercise 6.20
//2017.11.23
#include <iostream>
using namespace std;

int a = 0;
int b = 0;

string multiple(int,int);

int main()
{
    cout << "Input two integers:" ;
    while(cin >> a >> b)
    {
        cout << multiple(a,b) << endl << endl;
        cout << "Input two integers: ";
    }
    return 0;
}

string multiple(int i,int j)
{
    if (j % i == 0)
        return "true";
    else
        return "false";
}
