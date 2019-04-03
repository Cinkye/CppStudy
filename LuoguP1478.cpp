#include <iostream>
using namespace std;
int main()
{
	int n,s,a,b;
	cin >> n >> s >> a >> b;
	if(n == 0 || s == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	int apple[n][2];
	for(int i = 0;i < n;++i)
	{
		cin >> apple[i][0] >> apple[i][1];
		if(apple[i][0] > a+b)
			apple[i][1] = 281;
	}
	//Sort
	for(int i = 0;i < n;++i)
	{
		int min = i;
		for(int j = i;j < n;++j)
		{
			if(apple[j][1]<apple[min][1])
				min = j;
		}
		int tmpa = apple[i][0];
		int tmpb = apple[i][1];
		apple[i][0] = apple[min][0];
		apple[i][1] = apple[min][1];
		apple[min][0] = tmpa;
		apple[min][1] = tmpb;
	}
	int count = 0;
	for(int i = 0;i < n;++i)
	{
		count+=apple[i][1];
		if(count>s)
		{
			cout << i << endl;
			return 0;
		}
	}
}