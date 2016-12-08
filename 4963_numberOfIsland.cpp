#include<stdio.h>
int map[50][50];
int DFS(int x,int y,int w,int h)
{

    map[x][y] = 2;

    if(x > 0 && map[x-1][y] == 1)
        DFS(x-1,y,w,h);
    if(x < h-1 && map[x+1][y] == 1)
        DFS(x+1,y,w,h);
    if(y > 0 && map[x][y-1] == 1)
        DFS(x,y-1,w,h);
    if(y < w-1 && map[x][y+1] == 1)
        DFS(x,y+1,w,h);
    if(x > 0 && y > 0 && map[x-1][y-1] == 1)
        DFS(x-1,y-1,w,h);
    if(x > 0 && y < w-1 && map[x-1][y+1] == 1)
        DFS(x-1,y+1,w,h);
    if(x < h-1 && y > 0 && map[x+1][y-1] == 1)
        DFS(x+1,y-1,w,h);
    if(x < h-1 && y < w-1 && map[x+1][y+1] == 1)
        DFS(x+1,y+1,w,h);

    return 1;
}

int main()
{
    int w,h;
    while(scanf("%d %d",&w,&h))
    {
        if(w == 0 && h == 0)
            return 0;

        for(int i=0;i < h; i++)
            for(int j=0;j < w; j++)
                scanf("%d",&map[i][j]);
        int cnt = 0;
        for(int i=0;i < h; i++)
            for(int j=0; j < w; j++)
                if(map[i][j] == 1)
                    cnt += DFS(i,j,w,h);

        printf("%d\n",cnt);
    }
}
