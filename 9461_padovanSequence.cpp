#include<stdio.h>
unsigned long long P[100] = {1,1,1,2,2};
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        for(int i=5; i < N;i++)
            P[i]=P[i-5]+P[i-1];
        printf("%llu\n",P[N-1]);
    }
}
