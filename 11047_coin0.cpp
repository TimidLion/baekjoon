#include<stdio.h>

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int* coins = new int[N];
    int* counts = new int[N];
    int i;
    for(i =0;i < N; i++)
    {
        scanf("%d",&coins[i]);
        counts[i] = 0;
    }
    --i;
    while(i+1)
    {
        if(coins[i] > K)
            --i;
        else
        {
            counts[i]++;
            K -= coins[i];
        }
        if(K == 0)
            break;
    }
    int sum = 0;
    for(int i=0;i < N; i++)
        sum += counts[i];
    printf("%d",sum);
}
