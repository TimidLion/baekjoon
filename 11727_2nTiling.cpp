#include<stdio.h>
int Dp[1001];
int main()
{
    int n;
    scanf("%d",&n);
    Dp[1]=1;
    Dp[2]=3;
    for(int i=3; i <= n; i++)
    {
        Dp[i] = Dp[i-1] + 2*Dp[i-2]%10007;
    }
    printf("%d",Dp[n]%10007);
}
