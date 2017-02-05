#include<stdio.h>
int maze[1000][1000];
int len[1000][1000][2];
int dx[4] = {-1,1,0,0},dy[4] = {0,0,-1,1};
int N,M;

class point{
    public:
        int x, y;
        bool isBroken;
}

int modifiedBFS(int _x,int _y)
{
    queue<point> q;

    point start;
    start.x = _x;
    start.y = _y;
    start.isBroken = false;
    q.push(start);
    len[_x][_y][0] = 1;
    while(!q.empty() && q.front().x != N-1 || q.front().y != M-1)
    {
        point next;
        _x = q.front().x;
        _y = q.front().y;
        for(int i=0; i < 4; i++)
        {
            next.x = _x+dx[i];
            next.y = _y+dy[i];

            if(q.front().isBroken)
            {
                next.isBroken = true;
                if(maze[next.x][next.y] == 0)
                {
                    len[next.x][next.y][1] = len[_x][_y][1]+1;
                    q.push(next);
                }
                else
                    continue;
            }
            else
            {
                if(maze[next.x][next.y] == 1)
                {
                    next.isBroken = true;
                    len[next.x][next.y][1] = len[_x][_y][0]+1;
                    q.push(next);
                }
                else
                {
                    next.isBroken = false;
                    len[next.x][next.y][0] = len[_x][_y][0]+1;
                    q.push(next);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    scanf("%d %d\n",&N,&M);
    char ch,buf;
    for(int i=0;i < N;i++)
    {
        for(int j=0;j < M; j++)
        {
            scanf("%1d",&maze[i][j]);
        }
    }

/*    for(int i=0; i < N; i++)
    {
        for(int j=0; j < M; j++)
            printf("%d",maze[i][j]);
        printf("\n");
    }
*/
}
