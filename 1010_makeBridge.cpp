#include<stdio.h>
unsigned long long MchooseN(int M,int N)
{
    if(N==0)
        return 1;
    unsigned long long numerator=1,denominator=1;
    for(int i=M-N,j=N; j > 0; j--)
        numerator *= i;
    for(int j=N; j > 0;j--)
        denominator *= j;
    return numerator/denominator;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,M;
        scanf("%d %d",&N,&M);
        printf("%llu\n",MchooseN(M,N));
    }
}
