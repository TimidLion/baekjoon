#include<stdio.h>
int fibonacci[46] = {};
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci[1] = 1;
    for(int i =2;i <= n; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    printf("%d",fibonacci[n]);
}
