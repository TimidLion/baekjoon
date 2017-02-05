#include<stdio.h>
int coins[20];
int Dp[20][10001];
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i < T; i++)
    {
        int N;
        scanf("%d",&N);
        for(int j=0;j < N;j++)
            scanf("%d",&coins[j]);
        int M;
        scanf("%d",&M);

        for(int j=0;j < N;j++)
        {
            for(int m=1;m <= M;m++)
            {
                Dp[j][m] = m/coins[j];
                printf("%d ",Dp[j][m]);
            }
            printf("\n");
        }

        for(int j=0;j < N; j++)
        {
            for(int m=1;m <= M; m++)
                if(
        }
    }

}
