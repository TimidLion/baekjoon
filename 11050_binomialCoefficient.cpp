#include<stdio.h>
double NchooseK(int N,int K)
{
    if(K == 0)
        return 1.0;
    return double(N)/K*NchooseK(N-1,K-1);
}

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    printf("%d",(int)NchooseK(N,K));
}
