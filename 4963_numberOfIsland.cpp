#include<stdio.h>
int map[50][50];
int dx[8] = {-1,1,0,0,-1,-1,1,1};
int dy[8] = {0,0,-1,1,-1,1,-1,1};
int DFS(int x,int y,int w,int h)
{

    map[x][y] = 2;

    for(int i=0;i < 8; i++)
        if(x+dx[i] >= 0 && x+dx[i] <= h-1 && y+dy[i] >= 0 && y+dy[i] <= w-1)
            if(map[x+dx[i]][y+dy[i]] == 1)
                DFS(x+dx[i],y+dy[i],w,h);

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
