#include<stdio.h>
#include<algorithm>
int coins[101];
int Dp[101][10000];
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i <= n;i++)
        scanf("%d",&coins[i]);

    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= k; j++)
        {
            Dp[i][j] = max(coins[i]*(j/coins[i]),Dp[i-1][j]);
        }
    }

    for(int i=0;i <= n; i++)
    {
        for(int j=0;j <= k; j++)
            printf("%d ",Dp[i][j]);
        printf("\n");
    }
}
