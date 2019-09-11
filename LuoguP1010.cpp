#include <iostream>
using namespace std;
void solution(int a)
{
	long i = 0;
	int n = 0;
	int plusNeeded = 0;
	while(a != 0)
	{
		i = i * 10 + a % 2;
		n++;
		a /= 2;
	}
    n--;
	while(i != 0)
	{
		if(i%2==1)
		{
			if(plusNeeded)
				cout << "+";
			if(n==0)
				cout << "2(0)";
			else if(n==1)
				cout << "2";
			else
			{
				cout << "2(" ;
				solution(n);
				cout << ")";
			}
			plusNeeded = 1;
		}
		i /= 10;
		n--;
	}
    
}
int main(int argc, char const *argv[])
{
	int a;
	cin >> a;
	solution(a);
	return 0;
}