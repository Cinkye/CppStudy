#include<ctime>
#include<iostream>
#include<iomanip>
#include "Zoo.h"
#include <string>
#include<stdlib.h>
#include<windows.h>
using namespace std;

//static data members
int Visitor::total = 100000;
float FoodSeller::pPrice = 0.20;
float FoodSeller::cPrice = 0.30;
float FoodSeller::bPrice = 0.50;

//global variables
Animal* e1 = new Elephant;
Animal* g1 = new Girrafe;
Animal* g2 = new Girrafe;
Animal* m1 = new Monkey;
Animal* m2 = new Monkey;
Animal* m3 = new Monkey;
AnimalEnclosure eEnclosure;
AnimalEnclosure gEnclosure;
AnimalEnclosure mEnclosure;
FoodSeller seller;
float money = 0;

inline int randEx()
{
    LARGE_INTEGER seed;
    QueryPerformanceFrequency(&seed);
    QueryPerformanceCounter(&seed);
    srand(seed.QuadPart);

    return rand();
}

void SetColor(unsigned short forecolor, unsigned short backgroudcolor)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, forecolor | backgroudcolor);
}

//AnimalEnclosure's function
AnimalEnclosure::AnimalEnclosure()
{
    setStatus(1);
    setDirtLevel(0);
}

AnimalEnclosure::~AnimalEnclosure()
{
    //dtor
}

void AnimalEnclosure::setDirtLevel(int i)
{
    dirtLevel = i;
}

int AnimalEnclosure::getDirtLevel()
{
    return dirtLevel;
}

void AnimalEnclosure::setStatus(bool i)
{
    status = i;
}

bool AnimalEnclosure::getStatus()
{
    return status;
}

//Animal's function
Animal::Animal()
{
    foodEaten = 0;
}

Animal::~Animal()
{
    //dtor
}

//Elephant's function
Elephant::Elephant():Animal()
{
    setLength(randEx()%100/100+3);
}

Elephant::~Elephant()
{
    //dtor
}

double Elephant::getLength()
{
    return trunkLength;
}

void Elephant::setLength(double i)
{
    trunkLength = i;
}

void Elephant::feed(int i)
{
    if(foodEaten + i <=750)
        foodEaten += i;
    else
    {
        int dirt = foodEaten + i - 750;
        foodEaten = 750;
        eEnclosure.setDirtLevel(eEnclosure.getDirtLevel()+dirt);
    }
}

//Girrafe's function
Girrafe::Girrafe():Animal()
{
    setLength(randEx()%100/100+2);
}

Girrafe::~Girrafe()
{
    //dtor
}

double Girrafe::getLength()
{
    return neckLength;
}

void Girrafe::setLength(double i)
{
    neckLength = i;
}

void Girrafe::feed(int i)
{
    if(foodEaten + i <= 500)
        foodEaten += i;
    else
    {
        int dirt = foodEaten + i - 500;
        foodEaten = 500;
        gEnclosure.setDirtLevel(gEnclosure.getDirtLevel()+dirt);
    }
}

//Monkey's function
Monkey::Monkey():Animal()
{
    setLength(randEx()%100/100);
}

Monkey::~Monkey()
{
    //dtor
}

double Monkey::getLength()
{
    return armLength;
}

void Monkey::setLength(double i)
{
    armLength = i;
}

void Monkey::feed(int i)
{
    if(foodEaten + i <= 300)
        foodEaten += i;
    else
    {
        int dirt = foodEaten + i - 300;
        foodEaten = 300;
        mEnclosure.setDirtLevel(mEnclosure.getDirtLevel()+dirt);
    }
}

//Person's function
Person::Person()
{
    produceName();
    age = 18 + randEx() % 50;
}

Person::~Person()
{
    //dtor
}

void Person::setName(string i)
{
    name = i;
}

string Person::getName()
{
    return name;
}

void Person::setAge(int i)
{
    age = i;
}

int Person::getAge()
{
    return age;
}

void Person::produceName()
{
    string ans;
    for(int i=0;i<6;i++)
    {
        if (randEx()%2==0)
        {
            ans+='a'+randEx()%26;
        }
        else
        {
            ans+='A'+randEx()%26;
        }
    }
    name = ans;
}

//ZooKeeper's function
ZooKeeper::ZooKeeper():Person()
{
    setDays(0);
}

ZooKeeper::~ZooKeeper()
{
    //dtor
}

void ZooKeeper::setDays(int i)
{
    days = i;
}

int ZooKeeper::getDays()
{
    return days;
}

void ZooKeeper::checkDirt(AnimalEnclosure e)
{
    if(e.getStatus()==FALSE)
    {
        e.setStatus(TRUE);
        e.setDirtLevel(0);
        days++;
    }
    else if(e.getDirtLevel()>2000)
        e.setStatus(FALSE);
}

//FoodSeller's function
FoodSeller::FoodSeller():Person()
{
    peanut = 10000;
    carrot = 7000;
    banana = 4000;
}

FoodSeller::~FoodSeller()
{
    //dtor
}

int FoodSeller::getCarrot()
{
    return carrot;
}

int FoodSeller::getPeanut()
{
    return peanut;
}

int FoodSeller::getBanana()
{
    return banana;
}

float FoodSeller::getMoney()
{
    return money;
}
//Visitor's function
Visitor::Visitor():Person()
{
    total++;
    setPassID(total);
}

Visitor::~Visitor()
{
    //dtor
}

void Visitor::setPassID(int i)
{
    PassID = i;
}

int Visitor::getPassID()
{
    return PassID;
}

//Child's function
Child::Child():Visitor()
{
    peanut = 0;
    carrot = 0;
    banana = 0;
}

Child::~Child()
{
    //dtor
}

void Child::feed()
{
    while(peanut!=0||carrot!=0||banana!=0)
    {
        int select = randEx() % 6;
        switch(select)
            {
                case 0:
                    if(eEnclosure.getStatus()==1)
                        e1->feed(peanut);
                    peanut = 0;
                    break;
                case 1:
                    if(gEnclosure.getStatus()==1)
                        g1->feed(carrot);
                    carrot = 0;
                    break;
                case 2:
                    if(gEnclosure.getStatus()==1)
                        g2->feed(carrot);
                    carrot = 0;
                    break;
                case 3:
                    if(mEnclosure.getStatus()==1)
                        m1->feed(banana);
                    banana = 0;
                    break;
                case 4:
                    if(mEnclosure.getStatus()==1)
                        m2->feed(banana);
                    banana = 0;
                    break;
                case 5:
                    if(mEnclosure.getStatus()==1)
                        m3->feed(banana);
                    banana = 0;
                    break;
            }
    }

}

//Adult's function
Adult::Adult():Visitor()
{
    money = 10 + randEx() % 10;
    childNum = 1 + randEx() % 3;
}

Adult::~Adult()
{
    //dtor
}

void Adult::buyPass()
{
    money -= (1 + childNum * 0.4);
    ::money = ::money + (1 + childNum * 0.4);
}

void Adult::useMoney()
{
    buyPass();
    child1.carrot = (int)money/childNum;
    child1.banana = (int)money/childNum;
    child1.peanut = (int)money/childNum;
    seller.carrot -= (int)money;
    seller.banana -= (int)money;
    seller.peanut -= (int)money;
    seller.money += (int)money;

    if(childNum >= 2)
    {
        child2.carrot = (int)money/childNum;
        child2.banana = (int)money/childNum;
        child2.peanut = (int)money/childNum;
    }
    if(childNum >= 3)
    {
        child3.carrot = (int)money/childNum;
        child3.banana = (int)money/childNum;
        child3.peanut = (int)money/childNum;
    }

}

int Adult::getChildNum()
{
    return childNum;
}

//Zoo's function
Zoo::Zoo()
{
    day = 1;
}

Zoo::~Zoo()
{
    //dtor
}

void Zoo::newDay()
{
    visitorNum = 20+ randEx() % 21;
    Adult * a = new Adult[visitorNum];
    SetColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE, BACKGROUND_RED);
    cout << "***************************************\nToday is day "
        << day << endl;
    cout << "The number of visitor is " << visitorNum << endl;
    cout << "\nThe status of enclosures are:" << endl;
    cout << setw(10) << left << "Elephant" << setw(10) << "Girrafe" <<
    setw(10) << "Monkey" << endl;
    cout << setw(10) << left << eEnclosure.getStatus() << setw(10)
        << gEnclosure.getStatus() << setw(10) << mEnclosure.getStatus()
        << endl << endl;
    cout << "***************************************\n";
    SetColor();
    for(int i = 0;i<visitorNum;++i)
    {
        cout << "\nVisitor " << a[i].getName() << " ID: " <<a[i].getPassID()
            << " enters the zoo with " << a[i].getChildNum() << " kid(s)." << endl;
        a[i].useMoney();
        a[i].child1.feed();
        if(a[i].getChildNum() >= 2)
            a[i].child2.feed();
        if(a[i].getChildNum() >= 3)
            a[i].child3.feed();
    }
    cout << endl;
    keeper.checkDirt(eEnclosure);
    keeper.checkDirt(gEnclosure);
    keeper.checkDirt(mEnclosure);
    cout << "Total money: " << ::money+seller.getMoney() << endl << endl;
    day++;
}

bool Zoo::getStatus()
{
    if(seller.getPeanut() <= 0 || seller.getCarrot() <= 0 ||
       seller.getBanana() <= 0 || keeper.getDays() >= 10)
        return 0;
    else
        return 1;
}

int Zoo::getDay()
{
    return day;
}
