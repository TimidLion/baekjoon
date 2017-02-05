#include<stdio.h>
int Dp[31];
int main()
{
    int n;
    scanf("%d",&n);
    Dp[2] = 3;
    Dp[4] = 11;
    for(int i=6; i <= n; i++)
    {
        if(n%2 != 0)
            continue;
       Dp[i] = Dp[i-2] + Dp[i-4];
    }
    printf("%d",Dp[n]);
}
