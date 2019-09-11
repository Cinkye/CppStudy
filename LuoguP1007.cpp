#include <iostream>
using namespace std;
int main()
{
	int length;
	int number;
	int maxi=0,mini=0;
	cin >> length >> number;
	int distance[number];
	for(int i = 0;i < number;++i)
	{
		cin >> distance[i];
		if(length+1-distance[i] > distance[i] && length+1-distance[i] > maxi)
			maxi = length+1-distance[i];
		else if(distance[i] > length+1-distance[i] && distance[i] > maxi)
			maxi = distance[i];
		if(length+1-distance[i] < distance[i] && length+1-distance[i] > mini)
			mini = length+1-distance[i];
		else if(distance[i] < length+1-distance[i] && distance[i] > mini)
			mini = distance[i];
	}
	cout << mini << " " << maxi;
	return 0;
}