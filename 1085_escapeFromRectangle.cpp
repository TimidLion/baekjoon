#include<stdio.h>
int main()
{
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int row = w-x > x ? x : w-x;
    int col = h-y > y ? y : h-y;
    int ans = row > col ? col : row;
    printf("%d",ans);
}
