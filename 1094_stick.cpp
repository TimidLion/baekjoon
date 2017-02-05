#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int stickNum = 1;
    int sum = 0;
    for(int s=64; s > 0; s /= 2)
    {
        sum += s;
        if(X==sum)
            break;
        sum -= s;
        stickNum++;
    }
    printf("%d",stickNum);
}
