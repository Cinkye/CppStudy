#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int sum = 0;
	int a[m+2];
	for(int i = 0;i < n;++i)
	{
        int left=0,right=0,max=0;
		a[0] = -1;
		a[m+1] = -1;
		for(int j = 1;j < m+1;++j)
			cin >> a[m];
		for(int j = 1;j < m+1;++j)
			if(a[max] < a[j])
				max = j;
        for(int j = 0;j < m+2;++j)
            cout << a[j] << " ";
		left = max -1;
		right = max + 1;
		for(int j = 0;j < m;++j)
		{
			int l = left;
			int r = right;
			while(a[l] == a[r])
			{
				l--;
				r++;
			}
			if(l > r)
            {
                sum += a[l] * pow(2,m-j);
                left--;
            }
			else 
            {
                sum += a[r] * pow(2,m-j);
                right++;
            }
		}
        cout << sum << endl;
	}
    cout << sum;
}