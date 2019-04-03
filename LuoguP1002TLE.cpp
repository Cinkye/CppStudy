#include <iostream>
using namespace std;
int a,b,m,n;
int** boardPtr;
long go(int x,int y)
{
	if(boardPtr[x][y] != -1)
	{
	    if(boardPtr[x][y] == 1)
            return 1;
		if(x < a && y < b)
            return go(x+1,y) + go(x,y+1);
		else if(x < a)
			return go(x+1,y);
		else if(y < b)
			return go(x,y+1);

	}
	return 0;
}
int main()
{
	cin >> a >> b >> m >> n;
    int board[a+1][b+1];
    for(int i = 0;i < a+1;++i)
        for(int j = 0;j < b+1;++j)
            board[i][j] = 0;
    boardPtr = new int*[a+1];
    for(int i = 0;i < a+1;++i)
        boardPtr[i] = board[i];
	if(m + 1 <= a && n + 2 <= b)
		board[m+1][n+2] = -1;
	if(m + 2 <= a && n + 1 <= b)
		board[m+2][n+1] = -1;
	if(m - 1 >= 0 && n - 2 >= 0)
		board[m-1][n-2] = -1;
	if(m - 2 >= 0 && n - 1 >= 0)
		board[m-2][n-1] = -1;
	if(m + 1 <= a && n - 2 >= 0)
		board[m+1][n-2] = -1;
	if(m + 2 <= a && n - 1 >= 0)
		board[m+2][n-1] = -1;
	if(m - 2 >= 0 && n + 1 <= b)
		board[m-2][n+1] = -1;
	if(m - 1 >= 0 && n + 2 <= b)
		board[m-1][n+2] = -1;
	board[m][n] = -1;
	board[a][b] = 1;
	long sum = go(0,0);
	cout << sum;
}
