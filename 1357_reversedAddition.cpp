#include<stdio.h>
int Rev(int num)
{
    int digits[4]={};
    int i=0,revNum = 0;
    while(num)
    {
        digits[i] = num%10;
        num /= 10;
        i++;
    }

    for(int d=0; d < i; d++)
    {
        for(int j=d;j < i-1;j++)
            digits[d] *= 10;
        revNum += digits[d];
    }
    return revNum;
}

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    printf("%d",Rev(Rev(X)+Rev(Y)));
}
