#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int nums[n][n];
	for(int i = 0;i < n;++i)
		for(int j = 0;j < n;++j)
			nums[i][j] = 0;
		int a = -1,b = -1,c = -1;
		while(!(a == 0 && b == 0 && c == 0))
		{
			cin >> a >> b >> c;
			nums[a-1][b-1] = c;
		}
		int sum = nums[0][0];
		nums[0][0] = 0;
//		for(int i = 0;i < n;++i)
//		{
//			for(int j = 0;j < n;++j)
//				cout << nums[i][j] << " ";
//			cout << endl;
//		}
		for(int q = 0;q < 2;++q)
		{
			a = 0;
			b = 0;
			while(a < n-1 || b < n-1)
			{
				int row = 0,col = 0;
				for(int i = a+1;i < n;++i)
					col += nums[i][b];
				for(int i = b+1;i < n;++i)
					row += nums[a][i];
				if(a < n-1 && col > row)
				{
					sum += nums[a+1][b];
					nums[a+1][b] = 0;
					a++;
				}
				else if(b < n-1)
				{
					sum += nums[a][b+1];
					nums[a][b+1] = 0;
					b++;
				}
				else
				{
					sum += nums[a+1][b];
					nums[a+1][b] = 0;
					a++;
				}
			}
		}
		// a = 0;
		// b = 0;
		// while(a != n-1 || b != n-1)
		// {
		// 	if(b < n-1 && nums[a+1][b] < nums[a][b+1])
		// 	{
		// 		sum += nums[a][b+1];
		// 		nums[a][b+1] = 0;
		// 		b++;
		// 	}
		// 	else if(a < n-1)
		// 	{
		// 		sum += nums[a+1][b];
		// 		nums[a+1][b] = 0;
		// 		a++;
		// 	}
		// 	else
		// 	{
		// 		sum += nums[a][b+1];
		// 		nums[a][b+1] = 0;
		// 		b++;
		// 	}
		// }
		cout << sum;
	}
