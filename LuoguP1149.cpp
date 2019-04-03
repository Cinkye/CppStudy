#include <iostream>
using namespace std;
int use[2][10]={{6,2,5,5,4,5,6,3,7,6},{0,2,5,5,4,5,6,3,7,6}};
int count = 0;
int matchesUsed(int a)
{
	return (a/100 ? use[0][a/100] : use[1][a/100]) + (a/10 ? use[0][(a/10)%10] : use[1][(a/10)%10]) + use[0][a%10];
}

int main()
{
	int total;
	cin >> total;
	for(int i = 0;i <= 711;++i)
	{
		for(int j = 0;j <= 711;++j)
		{
			int sum = 4 + matchesUsed(i) + matchesUsed(j) + matchesUsed(i+j);
			if(sum == total)
            {
                count++;
            }	
		}
	}
    cout << count << endl;
}