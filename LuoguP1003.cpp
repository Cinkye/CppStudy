#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int floor[n][4];
	for(int i = 0;i < n;++i)
	{
		cin >> floor[i][0] >> floor[i][1] >> floor[i][2] >> floor[i][3];
		floor[i][2] += floor[i][0];
		floor[i][3] += floor[i][1];
	}
	int x,y;
	cin >> x >> y;
	for(int i = n-1;i >=0;i--)
	{
		if(x >= floor[i][0] && x <= floor[i][2] && y >= floor[i][1] && y <= floor[i][3])
		{
			cout << i+1;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
