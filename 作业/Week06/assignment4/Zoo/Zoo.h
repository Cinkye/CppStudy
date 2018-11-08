#ifndef ZOO_H
#define ZOO_H
#include<ctime>
#include<stdlib.h>
#include<string>
#include<windows.h>
using namespace std;

inline int randEx();            //高速生成随机数
void SetColor(unsigned short forecolor = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
                        unsigned short backgroudcolor = FOREGROUND_INTENSITY);
//用于设置前景背景色
class Animal
{
    public:
        Animal();
        virtual ~Animal();
        virtual double getLength() = 0;
        virtual void setLength(double) = 0;
        virtual void feed(int) = 0;
    private:
        double weight;
    protected:
        double foodEaten;
};

class Elephant: public Animal
{
    public:
        Elephant();
        virtual ~Elephant();
        virtual double getLength();
        virtual void setLength(double);
        virtual void feed(int);

    private:
        double trunkLength;

};

class Girrafe: public Animal
{
    public:
        Girrafe();
        virtual ~Girrafe();
        virtual double getLength();
        virtual void setLength(double);
        virtual void feed(int);

    private:
        double neckLength;
};

class Monkey: public Animal
{
    public:
        Monkey();
        virtual ~Monkey();
        virtual double getLength();
        virtual void setLength(double);
        virtual void feed(int);

    private:
        double armLength;
};

class AnimalEnclosure
{
    public:
        AnimalEnclosure();
        virtual ~AnimalEnclosure();
        void setDirtLevel(int);
        int getDirtLevel();
        void setStatus(bool);
        bool getStatus();
    private:
        int dirtLevel;
        bool status;
};

class Person
{
    public:
        Person();
        virtual ~Person();
        void setName(string);
        string getName();
        void setAge(int);
        int getAge();
        void produceName();
    private:
        string name;
        int age;
};

class ZooKeeper: public Person
{
    public:
        ZooKeeper();
        virtual ~ZooKeeper();
        void setDays(int);
        int getDays();
        void checkDirt(AnimalEnclosure);
    private:
        int days;
};

class FoodSeller: public Person
{
    public:
        FoodSeller();
        virtual ~FoodSeller();
        int getPeanut();
        int getCarrot();
        int getBanana();
        float getMoney();
        static float pPrice;
        static float cPrice;
        static float bPrice;
    private:
        float money;
        int peanut;
        int carrot;
        int banana;
        friend class Adult;
};

class Visitor: public Person
{
    public:
        Visitor();
        virtual ~Visitor();
        int getPassID();
        void setPassID(int);
        static int total;
    private:
        int PassID;
};

class Child: public Visitor
{
    public:
        Child();
        virtual ~Child();
        void feed();
        friend class Adult;
    private:
        int carrot;
        int peanut;
        int banana;
};

class Adult: public Visitor
{
    public:
        Adult();
        virtual ~Adult();
        void useMoney();
        void buyPass();
        int getChildNum();
    private:
        int childNum;
        Child child1;
        Child child2;
        Child child3;
        float money;
        friend class Zoo;

};

class Zoo
{
    public:
        Zoo();
        virtual ~Zoo();
        void newDay();
        bool getStatus();
        int getDay();
    protected:

    private:
        ZooKeeper keeper;
        int visitorNum;
        int day;
        friend class Adult;
        friend class Elephant;
        friend class Monkey;
        friend class Girrafe;
};

#endif // ZOO_H
