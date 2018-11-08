#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if(num<=1)    return false;
    else if(num==2) return true;
    else
    {
        for(int i = 2;i<=sqrt(num);++i)
            if(num%i==0)    return false;
    }
    return true;
}
int main()
{
    int n,b;
    cin >> n >> b;
    int a[n];
    int count = 0;
    int sum = 0;
    for(int i = 0;i<n;++i)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if(b<=10)
    {
        switch(b)
        {
        case 1:
            {
                for(int i = 0;i<n;++i)
                    if(isPrime(a[i]))
                        count++;
            }
        case 2:
            {
                for(int i = 0;i<n-1;++i)
                    for(int j = i+1;j<n;++j)
                        if(isPrime(a[i]+a[j]))
                            count++;
                break;
            }

        case 3:
            {
                for(int i = 0;i<n-2;++i)
                    for(int j = i+1;j<n-1;++j)
                        for(int k = i+2;k<n;++k)
                            if(isPrime(a[i]+a[j]+a[k]))
                                count++;
                break;
            }
        case 4:
            {
                for(int i = 0;i<n-3;++i)
                    for(int j = i+1;j<n-2;++j)
                        for(int k = i+2;k<n-1;++k)
                            for(int l = i+3;l<n;++l)
                                if(isPrime(a[i]+a[j]+a[k]+a[l]))
                                    count++;
                break;
            }

        case 5:
            {
                for(int i = 0;i<n-4;++i)
                    for(int j = i+1;j<n-3;++j)
                        for(int k = i+2;k<n-2;++k)
                            for(int l = i+3;l<n-1;++l)
                                for(int m = i+4;m<n;++m)
                                    if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]))
                                        count++;
                break;
            }
        case 6:
            {
                for(int i = 0;i<n-5;++i)
                    for(int j = i+1;j<n-4;++j)
                        for(int k = i+2;k<n-3;++k)
                            for(int l = i+3;l<n-2;++l)
                                for(int m = i+4;m<n-1;++m)
                                    for(int o = i+5;o<n;++o)
                                    if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]+a[o]))
                                        count++;
                break;
            }
        case 7:
            {
                for(int i = 0;i<n-6;++i)
                    for(int j = i+1;j<n-5;++j)
                        for(int k = i+2;k<n-4;++k)
                            for(int l = i+3;l<n-3;++l)
                                for(int m = i+4;m<n-2;++m)
                                    for(int o = i+5;o<n-1;++o)
                                        for(int p = i+6;p<n;++p)
                                            if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]+a[o]+a[p]))
                                            count++;
                break;
            }
        case 8:
            {
                for(int i = 0;i<n-7;++i)
                    for(int j = i+1;j<n-6;++j)
                        for(int k = i+2;k<n-5;++k)
                            for(int l = i+3;l<n-4;++l)
                                for(int m = i+4;m<n-3;++m)
                                    for(int o = i+5;o<n-2;++o)
                                        for(int p = i+6;p<n-1;++p)
                                            for(int q = i+7;q<n;++q)
                                                if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]+a[o]+a[p]+a[q]))
                                                count++;
                break;
            }
        case 9:
            {
                for(int i = 0;i<n-8;++i)
                    for(int j = i+1;j<n-7;++j)
                        for(int k = i+2;k<n-6;++k)
                            for(int l = i+3;l<n-5;++l)
                                for(int m = i+4;m<n-4;++m)
                                    for(int o = i+5;o<n-3;++o)
                                        for(int p = i+6;p<n-2;++p)
                                            for(int q = i+7;q<n-1;++q)
                                                for(int r = i+8;r<n;++r)
                                                    if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]+a[o]+a[p]+a[q]+a[r]))
                                                    count++;
                break;
            }
        case 10:
            {
                for(int i = 0;i<n-9;++i)
                    for(int j = i+1;j<n-8;++j)
                        for(int k = i+2;k<n-7;++k)
                            for(int l = i+3;l<n-6;++l)
                                for(int m = i+4;m<n-5;++m)
                                    for(int o = i+5;o<n-4;++o)
                                        for(int p = i+6;p<n-3;++p)
                                            for(int q = i+7;q<n-2;++q)
                                                for(int r = i+8;r<n-1;++r)
                                                    for(int s = i+9;s<n;++s)
                                                        if(isPrime(a[i]+a[j]+a[k]+a[l]+a[m]+a[o]+a[p]+a[q]+a[r]+a[s]))
                                                        count++;
                break;
            }
        }
    }
    else
    {
        switch(n-b)
        {
        case 0:
            {
                if(isPrime(sum))
                    count++;
                break;
            }
        case 1:
            {
                for(int i = 0;i<n;++i)
                    if(isPrime(sum-a[i]))
                        count++;
                break;
            }
        case 2:
            {
                for(int i = 0;i<n-1;++i)
                    for(int j = i+1;j<n;++j)
                        if(isPrime(sum-a[i]-a[j]))
                            count++;
                break;
            }
        case 3:
            {
                for(int i = 0;i<n-2;++i)
                    for(int j = i+1;j<n-1;++j)
                        for(int k = i+2;k<n;++k)
                            if(isPrime(sum-a[i]-a[j]-a[k]))
                                count++;
                break;
            }
        case 4:
            {
                for(int i = 0;i<n-3;++i)
                    for(int j = i+1;j<n-2;++j)
                        for(int k = i+2;k<n-1;++k)
                            for(int l = i+3;l<n;++l)
                                if(isPrime(sum-a[i]-a[j]-a[k]-a[l]))
                                    count++;
                break;
            }
        case 5:
            {
                for(int i = 0;i<n-4;++i)
                    for(int j = i+1;j<n-3;++j)
                        for(int k = i+2;k<n-2;++k)
                            for(int l = i+3;l<n-1;++l)
                                for(int m = i+4;m<n;++m)
                                    if(isPrime(sum-a[i]-a[j]-a[k]-a[l]-a[m]))
                                        count++;
                break;
            }
        case 6:
            {
                for(int i = 0;i<n-5;++i)
                    for(int j = i+1;j<n-4;++j)
                        for(int k = i+2;k<n-3;++k)
                            for(int l = i+3;l<n-2;++l)
                                for(int m = i+4;m<n-1;++m)
                                    for(int o = i+5;o<n;++o)
                                    if(isPrime(sum-a[i]-a[j]-a[k]-a[l]-a[m]-a[o]))
                                        count++;
                break;
            }
        case 7:
            {
                for(int i = 0;i<n-6;++i)
                    for(int j = i+1;j<n-5;++j)
                        for(int k = i+2;k<n-4;++k)
                            for(int l = i+3;l<n-3;++l)
                                for(int m = i+4;m<n-2;++m)
                                    for(int o = i+5;o<n-1;++o)
                                        for(int p = i+6;p<n;++p)
                                            if(isPrime(sum-a[i]-a[j]-a[k]-a[l]-a[m]-a[o]-a[p]))
                                            count++;
                break;
            }
        case 8:
            {
                for(int i = 0;i<n-7;++i)
                    for(int j = i+1;j<n-6;++j)
                        for(int k = i+2;k<n-5;++k)
                            for(int l = i+3;l<n-4;++l)
                                for(int m = i+4;m<n-3;++m)
                                    for(int o = i+5;o<n-2;++o)
                                        for(int p = i+6;p<n-1;++p)
                                            for(int q = i+7;q<n;++q)
                                                if(isPrime(sum-a[i]-a[j]-a[k]-a[l]-a[m]-a[o]-a[p]-a[q]))
                                                count++;
                break;
            }
        case 9:
            {
                for(int i = 0;i<n-8;++i)
                    for(int j = i+1;j<n-7;++j)
                        for(int k = i+2;k<n-6;++k)
                            for(int l = i+3;l<n-5;++l)
                                for(int m = i+4;m<n-4;++m)
                                    for(int o = i+5;o<n-3;++o)
                                        for(int p = i+6;p<n-2;++p)
                                            for(int q = i+7;q<n-1;++q)
                                                for(int r = i+8;r<n;++r)
                                                    if(isPrime(sum-a[i]-a[j]-a[k]-a[l]-a[m]-a[o]-a[p]-a[q]-a[r]))
                                                    count++;
                break;
            }
        }
    }
    cout << count ;
}
