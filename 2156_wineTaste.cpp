#include<stdio.h>
#include<algorithm>
int wine[10001];
int Dp[10001][2];
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i <= N;i++)
        scanf("%d",&wine[i]);

    Dp[0][0] = Dp[0][1] = 0;
    Dp[1][0] = 0;
    Dp[1][1] = wine[1];
    for(int i=2;i <= N;i++)
    {
        Dp[i][0] = Dp[i-1][1] + wine[i];
        Dp[i][1] = max(Dp[i-2][0]+wine[i],Dp[i-2][1]+wine[i]);
    }

    for(int i=0;i <= N; i++)
        printf("%d: %d %d\n",i,Dp[i][0],Dp[i][1]);
    printf("%d",max(max(Dp[N][1],Dp[N][0]),max(Dp[N-1][0],Dp[N-1][1])));
}
