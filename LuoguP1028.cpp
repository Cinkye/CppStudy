#include <iostream>
using namespace std;
int calculated[1001] = {0};
int value[1001] = {0};
int count(int a)
{
	if(calculated[a] == 1)
		return value[a];
	else
	{
		if(a == 1)
		{
			value[1] = 1;
			calculated[1] = 1;
			return 1;
		}
		else if(a == 2)
		{
			value[2] = 2;
			calculated[1] = 1;
			return 2;
		}
		else
		{
			int half = a / 2;
			int sum = 1;
			for(int i = 1;i <= half;++i)
				sum += count(i);
			value[a] = sum;
			calculated[a] = 1;
			return sum;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	cout << count(n); 
}