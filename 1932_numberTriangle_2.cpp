#include<stdio.h>
int Dp[501][501] = {};
int main()
{
    int n;
    int tri[501][501];
    scanf("%d",&n);
    for(int i =1; i <= n; i++)
    {
        for(int j =1; j <= i; j++)
            scanf("%d",&tri[i][j]);
    }
    
    int max = 0;
    Dp[1][1] = tri[1][1];
    for(int i =1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            if(j!=1&&j!=i)
            {
                if(Dp[i-1][j-1] <= Dp[i-1][j])
                    Dp[i][j] = Dp[i-1][j]+tri[i][j];
                else
                    Dp[i][j] = Dp[i-1][j-1]+tri[i][j];
            }
            else if(j == 1)
            {
                Dp[i][j] = Dp[i-1][j]+tri[i][j];
            }
            else if(j == i)
            {
                Dp[i][j] = Dp[i-1][j-1]+tri[i][j];
            }
            if(Dp[i][j] > max)
                max = Dp[i][j];
        }
    }
    printf("%d",max);
}
