#include<stdio.h>
#include<algorithm>
int Dp[3][1001];
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i <= N; i++)
    {
        int R,G,B;
        scanf("%d %d %d",&R,&G,&B);
        Dp[0][i] = R + min(Dp[1][i-1],Dp[2][i-1]);
        Dp[1][i] = G + min(Dp[0][i-1],Dp[2][i-1]);
        Dp[2][i] = B + min(Dp[0][i-1],Dp[1][i-1]);
    }

    printf("%d",min(Dp[0][N],min(Dp[1][N],Dp[2][N])));
}
