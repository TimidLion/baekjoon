#include<stdio.h>
#include<algorithm>
int wine[10001];
int Dp[10001][3];
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i <= N;i++)
        scanf("%d",&wine[i]);

    Dp[0][0] = Dp[0][1] = Dp[0][2] =  0;
    Dp[1][0] = 0;
    Dp[1][1] = wine[1];
    Dp[1][2] = wine[1];
    for(int i=2;i <= N;i++)
    {
        Dp[i][0] = max(Dp[i-1][2],Dp[i-1][1]) + wine[i];
        Dp[i][1] = max(Dp[i-2][2],max(Dp[i-2][0],Dp[i-2][1]))+wine[i];
        if(i != 2)
            Dp[i][2] = max(Dp[i-3][2],max(Dp[i-3][0],Dp[i-3][0]))+wine[i];
    }

    printf("%d",max(max(Dp[N][1],Dp[N][0]),max(Dp[N-1][0],Dp[N-1][1])));
}
