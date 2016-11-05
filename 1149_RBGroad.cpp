#include<stdio.h>
int Dp[1001][3] = {{0}};
int main()
{
    int N;
    scanf("%d",&N);
    int R,G,B;
    int sum = 0;
    for(int i =0; i < N ;i++)
    {
        int color[3];
        scanf("%d %d %d",&R,&G,&B);
        if(i == 0)
        {
            Dp[0][0] = R;
            Dp[0][1] = G;
            Dp[0][2] = B;
        }
        else
        {
            Dp[i][0] = R + ((Dp[i-1][1]<Dp[i-1][2])?Dp[i-1][1]:Dp[i-1][2]);
            Dp[i][1] = G + ((Dp[i-1][0]<Dp[i-1][2])?Dp[i-1][0]:Dp[i-1][2]);
            Dp[i][2] = B + ((Dp[i-1][0]<Dp[i-1][1])?Dp[i-1][0]:Dp[i-1][1]);
        }
    }
    int smallest = Dp[N-1][0];
    if(smallest > Dp[N-1][1])
        smallest = Dp[N-1][1];
    if(smallest > Dp[N-1][2])
        smallest = Dp[N-1][2];
    printf("%d",smallest);
}
