//Exercise 8.12
//2017.12.14
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
void moveTortoise(int *);
void moveHare(int *);
void clearLine(int *,int *, char *);
bool moveLine(int *,int *,char *);
int main()
{
    srand(time(0));
    cout << "BANG !!!!!\nAND THEY ARE OFF !!!!!" << endl;
    char line[70];
    for(int i = 0;i<70;++i)
        line[i] = ' ';
    int torPos = 0;
    int harePos = 0;
    int *tPtr,*hPtr;
    char *lPtr = line;
    tPtr = &torPos;
    hPtr = &harePos;
    while(torPos<70&&harePos<70)
    {
        clearLine(tPtr,hPtr,lPtr);
        moveHare(hPtr);
        moveTortoise(tPtr);
        if(moveLine(tPtr,hPtr,lPtr))
        {
            for(int i = 0;i<69;++i)
                cout << line[i];
            cout << line[69] << endl;
        }
        else
            cout<< "OUCH!!!" << endl;

    }
    if(torPos>=70&&harePos<70)
        cout << "TORTOISE WINS!!! YAY!!!" << endl;
    else if(torPos<70&&harePos>=70)
        cout << "Hare wins. Yuch." << endl;
    else if(torPos>=70&&harePos>=70)
        cout << "It's a tie." << endl;
}
void moveTortoise(int *tPtr)
{
    switch (rand()%10)
    {
    case 0:
        *tPtr +=3;
        break;
    case 1:
        *tPtr +=3;
        break;
    case 2:
        *tPtr +=3;
        break;
    case 3:
        *tPtr +=3;
        break;
    case 4:
        *tPtr +=3;
        break;
    case 5:
        if(*tPtr >= 6)
            *tPtr -=6;
        else
            *tPtr =0;
        break;
    case 6:
        if(*tPtr >= 6)
            *tPtr -=6;
        else
            *tPtr =0;
        break;
    case 7:
        *tPtr += 1;
        break;
    case 8:
        *tPtr += 1;
        break;
    case 9:
        *tPtr += 1;
        break;
    }
}
void moveHare(int *hPtr)
{
    switch (static_cast<int>(rand())%10)
    {
    case 2:
        *hPtr += 9;
        break;
    case 3:
        *hPtr += 9;
        break;
    case 4:
        if(*hPtr >=12)
            *hPtr -= 12;
        else
            *hPtr = 0;
        break;
    case 5:
        *hPtr -= 2;
        break;
    case 6:
        *hPtr -= 2;
        break;
    case 7:
        *hPtr += 1;
        break;
    case 8:
        *hPtr += 1;
        break;
    case 9:
        *hPtr += 1;
        break;
    }
}
bool moveLine(int *tPtr,int *hPtr,char *lPtr)
{
    if(*tPtr != *hPtr)
    {
        *(lPtr + *tPtr) = 'T';
        *(lPtr + *hPtr) = 'H';
        return 1;
    }
    else
        return 0;
}
void clearLine(int *tPtr,int *hPtr,char *lPtr)
{
        *(lPtr + *tPtr) = ' ';
        *(lPtr + *hPtr) = ' ';
}
