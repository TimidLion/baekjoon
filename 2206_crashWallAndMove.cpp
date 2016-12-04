#include<stdio.h>
int maze[1000][1000];
int x[1000],y[1000],len[1000][1000];
int cnt;

void enqueue(int _x,int _y,int _l)
{
    x[cnt] = _x;
    y[cnt] = _y;
    len[_x][_y] = _l;
    cnt++;
    maze[_y][_x]=0;
}

void BFS(int _x, int _y,int N,int M)
{
    int pos = 0;

    enqueue(_x,_y,1);
    while(pos < cnt && (x[pos] != M-1 || y[pos] != N-1))
    {
        //Up
        if(y[pos] > 0 && maze[y[pos]-1][x[pos]] == 1)
            enqueue(x[pos],y[pos]-1,len[x[pos]][y[pos]]+1);
        //Down
        if(y[pos] < N-1 && maze[y[pos]+1][x[pos]] == 1)
            enqueue(x[pos],y[pos]+1,len[x[pos]][y[pos]]+1);
        //Right
        if(x[pos] < M-1 && maze[y[pos]][x[pos]+1] == 1)
            enqueue(x[pos]+1,y[pos],len[x[pos]][y[pos]]+1);
        //Left
        if(x[pos] > 0 && maze[y[pos]][x[pos]-1] == 1)
            enqueue(x[pos]-1,y[pos],len[x[pos]][y[pos]]+1);

        pos++;
    }
    printf("%d",len[x[pos]][y[pos]]);
}

int main()
{
    int N,M;
    scanf("%d %d\n",&N,&M);
    char ch,buf;
    for(int i=0;i < N;i++)
    {
        for(int j=0;j < M; j++)
        {
            scanf("%c",&ch);
            maze[i][j] = (int)ch-48;
        }
        scanf("%c",&buf);
    }
    BFS(0,0,N,M);
}
