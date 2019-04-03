#include <iostream>
using namespace std;
int a,b,m,n;
int main()
{
	cin >> a >> b >> m >> n;
	if(m == 0 && n == 0)
    {
        cout << 0;
        return 0;
    }
    int board[a+1][b+1];
    long long sum[a+1][b+1] = {0};
    for(int i = 0;i < a+1;++i)
        for(int j = 0;j < b+1;++j)
            board[i][j] = 0;
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
	for(int i = 0;i < a+1;++i)
		sum[i][0] = ((board[i][0] == -1 || (i == 0 ? false : sum[i-1][0] == 0)) ? 0 : 1);
	for(int i = 0;i < b+1;++i)
		sum[0][i] = ((board[0][i] == -1 || (i == 0 ? false : sum[0][i-1] == 0)) ? 0 : 1);
	for(int i = 1;i < a+1;++i)
		for(int j = 1;j < b+1;++j)
		{
			if(board[i][j] == -1)
				sum[i][j] = 0;
			else
				sum[i][j] = sum[i-1][j] + sum[i][j-1];
		}
	cout << sum[a][b];
}
