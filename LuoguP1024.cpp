#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

double a,b,c,d;
double solve(double x)
{
	return a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d;
}
int main()
{
	cin >> a >> b >> c >> d;
	int find = 0;
	double x = -100.0;
	double solution = x;
	while(x<=100)
	{
        if(find == 3)
        {
            return 0;
        }
        double n = solve(x);
        double m = solve(x+0.01);
        if(n == 0)
        {
        	find++;
        	cout << setprecision(2) << fixed << x;
        	if(find != 3)
        		cout << " ";
        	x+=1;
        }
		else if(n * m < 0)
		{
			find++;
            if(abs(n) < abs(m))
			    cout << x;
            else
                cout << setprecision(2) << fixed << x+0.01;
			if(find != 3)
				cout << " ";
			x+=1;
		}
		else
			x+=0.01;
	}
}
