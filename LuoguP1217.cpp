#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> p;
void printPrime(int a)
{
	int prime = 1;
	int sqr = ceil(sqrt(a));
	for(int i = 2;i <= sqr;++i)
		if(a % i == 0)
		{
			prime = 0;
			break;
		}
		if(prime == 1)
		{
			p.push_back(a);
		}

	}
	int main()
	{
		int a,b;
		cin >> a >> b;
		int palindrome = 0;
		for (int d1 = 1; d1 <= 9; d1+=2)
		{
			palindrome = 10*d1 + d1;
			if(palindrome >= a && palindrome <= b)
				printPrime(palindrome);
			palindrome = d1;
			if(palindrome >= a && palindrome <= b)
				printPrime(palindrome);
			for (int d2 = 0; d2 <= 9; d2++)
			{
				palindrome = 1000*d1 + 100*d2 + 10*d2 + d1;
				if(palindrome >= a && palindrome <= b)
					printPrime(palindrome);
				palindrome = 100*d1 + 10*d2 + d1;
				if(palindrome >= a && palindrome <= b)
					printPrime(palindrome);
				for (int d3 = 0; d3 <= 9; d3++)
				{
					palindrome = 100000*d1 + 10000*d2 +1000*d3 + 100*d3 + 10*d2 + d1;
					if(palindrome >= a && palindrome <= b)
						printPrime(palindrome);
					palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;
					if(palindrome >= a && palindrome <= b)
						printPrime(palindrome);
					for(int d4 = 0; d4 <=9; d4++)
					{
						palindrome = 10000000*d1 + 1000000*d2 +100000*d3 + 10000*d4 + 1000*d4 + 100*d3 + 10*d2 + d1;
						if(palindrome >= a && palindrome <= b)
							printPrime(palindrome);
						palindrome = 1000000*d1 + 100000*d2 +10000*d3 + 1000*d4 + 100*d3 + 10*d2 + d1;
						if(palindrome >= a && palindrome <= b)
							printPrime(palindrome);
					}
				}
			}
		}
		sort(p.begin(),p.end());
		for(vector<int>::iterator it = p.begin();it < p.end();it++)
			cout << *it << endl;
	}
