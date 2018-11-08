#include <iostream>
#include "Zoo.h"
#include<time.h>
using namespace std;

int main()
{
    cout << "A new zoo has been established!!!" << endl;
    Zoo newZoo;
    while(newZoo.getStatus())
        newZoo.newDay();
    cout << "\nThe zoo closed after " << newZoo.getDay()  << " days."<< endl;
    system("pause");
}
