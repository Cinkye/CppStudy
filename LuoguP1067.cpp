#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0;i <= n;++i)
		cin >> a[i];
	for(int i = 0;i <= n;++i)
	{
		if(a[i] == 1)
		{
			if(i != 0)
            	cout << "+";
            if(i == n)
                cout << 1;
        }
		else if(a[i] == -1)
		{
			cout << "-";
			if(i == n)
				cout << 1;
		}
		else if(a[i] > 0)
		{
			if(i != 0)
				cout << "+";
			cout << a[i];
		}
		else if(a[i] < 0)
			cout << a[i];
		if(a[i]!=0 && i!=n)
        {
            cout << "x";
            if(i != n-1)
                cout << "^" << n-i;
        }
	}
}
