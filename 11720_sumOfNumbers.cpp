#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sum = 0;
    while(N--)
    {
        int a;
        scanf("%1d",&a);
        sum += a;
    }
    printf("%d",sum);
}
