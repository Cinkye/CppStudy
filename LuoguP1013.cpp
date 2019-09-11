#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string nums[n][n];
	string out = "";
	string letters[n-1];
	for(int i = 0;i < n-1;++i)
		letters[i] = "";
	for(int i = 0;i < n;++i)
		for(int j = 0;j < n;++j)
			cin >> nums[i][j];
    //  for(int i = 0;i < n;++i)
    //  {
    //      for(int j = 0;j < n;++j)
			 // cout << nums[i][j] << " ";
    //      cout << endl;
    //  }
		
	for(int i = 1;i < n;++i)
	{
		for(int j = 1;j < n;++j)
		{	
			if(nums[0][j].compare(nums[i][j])!=0)
				break;
			if(j == n-1)
			{
				letters[0] = nums[i][0];
			}
		}
	}
    if(letters[0].compare("") == 0)
	{
		cout << "ERROR!";
		return 0;
	}
	int lineOne = 0;
	for(int i = 1;i < n;++i)
	{
        if(lineOne != 0)
            break;
		for(int j = 1;j < n;++j)
		{	
			if(nums[i][j].length() == 2)
			{
				letters[1] = nums[i][j].substr(0,1);
                for(int j = 1;j < n;++j)
                    if(nums[j][0] == letters[1])
                    {
                        lineOne = j;
                        break;
                    }
                break;
			}
            
		}
	}
    if(letters[1].compare("") == 0)
	{
		cout << "ERROR!";
		return 0;
	}
	for(int i = 2;i < n-1;++i)
		for(int j = 1;j < n;++j)
		{
			if(nums[0][j].compare(letters[i-1]) == 0)
			{
				letters[i] = nums[lineOne][j];
				break;
			}
			if(j == n-1)
			{
				cout << "ERROR!";
				return 0;
			}
		}
    for(int i = 1;i < n;++i)
    {
        for(int j = 1;j < n;++j)
        {
            int a,b,c;
            for(int k = 0;k < n-1;++k)
            {
                if(nums[0][j] == letters[k])
                    a = k;
                if(nums[i][0] == letters[k])
                    b = k;
                if(nums[i][j] == letters[k])
                    c = k;
                else if(nums[i][j].length() == 2 && nums[i][j].substr(1,2) == letters[k])
                    c = k + n - 1;
            }
            if(a + b != c)
            {
                cout << "ERROR!";
                return 0;
            }
        }
    }
    for(int i = 1;i < n;++i)
        for(int j = 0;j < n-1;++j)
        	if(nums[0][i] == letters[j])
            {
                out = out + letters[j] + "=" + (char)(j+48);
                if(i != n-1)
                    out = out + " ";
            }
	cout << out << endl << n-1;

}



// 按字母大小输出（bug未修）
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string nums[n][n];
	string out = "";
	string letters[n-1];
	for(int i = 0;i < n-1;++i)
		letters[i] = "";
	for(int i = 0;i < n;++i)
		for(int j = 0;j < n;++j)
			cin >> nums[i][j];
   //  for(int i = 0;i < n;++i)
   //  {
   //      for(int j = 0;j < n;++j)
			// cout << nums[i][j] << " ";
   //      cout << endl;
   //  }
		
	for(int i = 1;i < n;++i)
	{
		for(int j = 1;j < n;++j)
		{	
			if(nums[0][j].compare(nums[i][j])!=0)
				break;
			if(j == n-1)
			{
				out = nums[i][0] + "=0";
				letters[0] = nums[i][0];
			}
		}
	}
    if(letters[0].compare("") == 0)
	{
		cout << "ERROR!";
		return 0;
	}
	int lineOne = 0;
	for(int i = 1;i < n;++i)
	{
        if(lineOne != 0)
            break;
		for(int j = 1;j < n;++j)
		{	
			if(nums[i][j].length() == 2)
			{
				letters[1] = nums[i][j].substr(0,1);
				out = out + " " + letters[1] + "=1";
				for(int j = 1;j < n;++j)
                    if(nums[j][0] == letters[1])
                    {
                        lineOne = j;
                        break;
                    }
                break;
			}
            
		}
	}
    if(letters[1].compare("") == 0)
	{
		cout << "ERROR!";
		return 0;
	}
	for(int i = 2;i < n-1;++i)
		for(int j = 1;j < n;++j)
		{
			if(nums[0][j].compare(letters[i-1]) == 0)
			{
				letters[i] = nums[lineOne][j];
				out = out + " " + letters[i] + "=" + (char)(i+48);
				break;
			}
			if(j == n-1)
			{
				cout << "ERROR!";
				return 0;
			}
		}
    for(int i = 1;i < n;++i)
    {
        for(int j = 1;j < n;++j)
        {
            int a,b,c;
            for(int k = 0;k < n-1;++k)
            {
                if(nums[0][j] == letters[k])
                    a = k;
                if(nums[i][0] == letters[k])
                    b = k;
                if(nums[i][j] == letters[k])
                    c = k;
                else if(nums[i][j].length() == 2 && nums[i][j].substr(1,2) == letters[k])
                    c = k + n - 1;
            }
            if(a + b != c)
            {
                cout << "ERROR!";
                return 0;
            }
        }
    }
	cout << out << endl << n-1;

}