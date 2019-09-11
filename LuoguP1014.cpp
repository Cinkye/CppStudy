#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	while(n - i > 0)
	{
		n -= i;
		i++;
	}
	if(i%2==0)
		cout << n << "/" << i-n+1;
	else
		cout << i-n+1 << "/" << n;
}