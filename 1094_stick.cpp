#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int N=0;
    while(X> 0)
    {
        if(X%2)
            N++;
        X/=2;
    }
    printf("%d",N);
}
