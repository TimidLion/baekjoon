#include<stdio.h>
#include<algorithm>
using namespace std;
int map[1000][1000];
int Dp[1000][1000];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i < N; i++)
        for(int j=0;j < M; j++)
            scanf("%d",&map[i][j]);

    Dp[0][0] = map[0][0];
    for(int i=0; i < N;i++)
    {
        for(int j=0; j < M; j++)
        {
            if( i > 0 )
                map[i][j] = max(Dp[i][j],Dp[i-1][j] + map[i][j]);
            if( i < N-1 )
                map[i][j] = max(Dp[i][j],Dp[i+1][j] + map[i][j]);
            if( j > 0 )
                map[i][j] = max(Dp[i][j],Dp[i][j-1] + map[i][j]);
            if( j < M-1 )
                map[i][j] = max(Dp[i][j],Dp[i][j+1] + map[i][j]);
        }
    }

    for(int i=0;i < N; i++)
    {
        for(int j=0;j < M; j++)
            printf("%d ",map[i][j]);
        printf("\n");
    }
}   
