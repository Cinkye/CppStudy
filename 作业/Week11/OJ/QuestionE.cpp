//Question E
#include <iostream>
using namespace std;

int main()
{
    int grade = 0;
    string a = "优秀";
    string b = "良好";
    string c = "中等";
    string d = "及格";
    string e = "不及格";
    cin >> grade;
    if(grade <= 100 && grade >= 90)
    cout << "The grade is:" << a;
    if(grade <= 89 && grade >= 80)
    cout << "The grade is:" << b;
    if(grade <= 79 && grade >= 70)
    cout << "The grade is:" << c;
    if(grade <= 69 && grade >= 60)
    cout << "The grade is:" << d;
    if(grade <= 59 && grade >= 0)
    cout << "The grade is:" << e;
    return 0;
}
