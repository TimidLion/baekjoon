#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i < T; i++)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int n;
        scanf("%d",&n);
        int touch = 0;
        for(int j = 0;j < n; j++)
        {
            int cx,cy,r;
            scanf("%d %d %d",&cx,&cy,&r);
            int len1 = (cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
            int len2 = (cx-x2)*(cx-x2)+(cy-y2)*(cy-y2);
            if(len1 <= r*r && len2 >= r*r || len1 >= r*r && len2 <= r*r)
                touch++;
        }
        printf("%d\n",touch);
    }
}
