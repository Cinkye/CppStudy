#include <iostream>
#include <fstream>
// #include "Maze.h"
#include <stdlib.h>
using namespace std;
int main()
{
    char a[19]= "hello world!";
    char * pa = a;
    cout << (int *)pa << endl << (int *)a << endl << a;
}
