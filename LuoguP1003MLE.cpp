#include <iostream>
using namespace std;
int main()
{
	int n;
	int a,b,g,k;
	cin >> n;
	int** floor = (int**)new int* [1001];
	for(int i = 0;i < 1001;++i)
        floor[i] = new int[1001];
	for(int i = 0;i < 1001;++i)
		for(int j = 0;j < 1001;++j)
			floor[i][j] = -1;
	for(int i = 0;i < n;++i)
	{
		cin >> a >> b >> g >> k;
		for(int j = a;j <= a+g;++j)
			for(int m = b;m <= b+k;++m)
				floor[j][m] = i+1;
	}
	int x,y;
	cin >> x >> y;
	cout << floor[x][y];
}
