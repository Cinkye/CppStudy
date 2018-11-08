#include<iostream>
#include<algorithm>
using namespace std;

int rooms[201]={0};

int main(){
    int T,N,begin,end,max;
    cin >> T;
    while(T--)
        {
        max=0;
        for(int i=0; i<201; i++)
          rooms[i]=0;
        cin >> N;
        for(int j=0; j<N; j++){
            cin >> begin >> end;
            if(begin>end)
              swap(begin,end);
            for(int k=(begin+1)/2; k<=(end+1)/2; k++)
              rooms[k]++;
        }
        for(int g=0; g<201; g++)
          if(rooms[g]>max)
            max=rooms[g];
        cout << max * 10 << endl;
    }
}
