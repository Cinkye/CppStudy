#include<iostream>
using namespace std;
int main()
{
        double S,L,StoL,LtoT,tree;
        cin>>S>>L>>StoL>>LtoT;
        tree = (L - S) / StoL * (LtoT + StoL);
        cout<<"tree";
        return 0;
}
