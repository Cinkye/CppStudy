#include <iostream>
using namespace std;

int m,n;
int* memory;

int found(int a)
{
	for(int i = 0;i < m;i++)
		if(a == memory[i])
			return true;
	return false;
}
int main()
{
	cin >> m >> n;
	int a,count = 0;
	memory = new int[m];
	int toBeThrown = 0;
	for(int i = 0;i < m;++i)
		memory[i] = -1;
	for(int i = 0;i < n;++i)
	{
		cin >> a;
		if(!found(a))
		{
			count++;
			memory[toBeThrown] = a;
			toBeThrown = (toBeThrown + 1) % m;
		}
	}
	cout << count;
	return 0;
}