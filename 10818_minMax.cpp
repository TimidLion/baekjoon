#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a,min=1000000,max=-1000000;
    while(N--)
    {
        scanf("%d",&a);
        if( min > a)
            min = a;
        if( max < a)
            max = a;
    }
    printf("%d %d",min,max);
}
