#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int numbers[100];
	int count = 0;
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n;++i)
	{
		cin >> a;
		int same = 0;
		for(int j = 0;j < count;++j)
			if(a == numbers[j])
			{
				same = 1;
				break;
			}
		if(same == 0)
		{
			numbers[count] = a;
			count++;
		}
	}
	sort(numbers,numbers+count);
	cout << count << endl;
	for(int i = 0;i < count;++i)
		cout << numbers[i] << " ";
}