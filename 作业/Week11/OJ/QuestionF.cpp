//Question F
#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    int a = 0;
    int i = 0;
    int sum = 0;
    double average = 0.0;
    int counter = 0;
    while(cin >> n >> m)
    {
        a = 0;
        i = 0;
        sum = 0;
        average = 0.0;
        counter = 0;
        while (i<n)
        {
            ++i;
            a += 2;
            sum += a;
            if(i%m==0)
            {
                if(n-i==0)
                {
                    average = static_cast<double>(sum) / static_cast<double>(m);
                    cout << average;
                    sum=0;
                    ++counter;
                }
                else
                {
                    average = static_cast<double>(sum) / static_cast<double>(m);
                    cout << average << " ";
                    sum=0;
                    ++counter;
                }
            }

        }

        if(n-(counter*m)!=0)
                {
                    average = static_cast<double>(sum) / static_cast<double>((n-counter*m));
                    cout << average << endl;
                }
                else
                    cout << endl;
    }

}
