#include <iostream>
using namespace std;
int main()
{
	int lose = 0,win = 0;
	string result = "";
	char line;
	int endFlag = 0;
	while(line = cin.get())
	{
		result += line;
		if(line == 'E')
            break;
	}
	for(int i = 0;i < result.length();++i)
	{
		if((win >= 11 && win-lose >= 2) || (lose >= 11 && lose-win >= 2))
		{
			cout << win << ":" << lose << endl;
			win = 0;
			lose = 0;
		}
		if(result[i] == 'W')
			win++;
		else if(result[i] == 'L')
			lose++;
	}
    cout << win << ":" << lose << endl << endl;
    win = 0;
    lose = 0;
	for(int i = 0;i < result.length();++i)
	{
		if((win >= 21 && win-lose >= 2) || (lose >= 21 && lose-win >= 2))
		{
			cout << win << ":" << lose << endl;
			win = 0;
			lose = 0;
		}
		if(result[i] == 'W')
			win++;
		else if(result[i] == 'L')
			lose++;
	}
    cout << win << ":" << lose << endl << endl;
}
