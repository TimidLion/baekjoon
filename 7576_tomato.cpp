#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int map[1000][1000];
int BFS(int n,int N,int M)
{
    queue<pair<int,int> > Q;
    queue<pair<int,int> > Qnext;
    int days = 0;
    for(int i=0;i < N; i++)
        for(int j=0; j < M; j++)
            if(map[i][j]==1)
                Q.push(make_pair(i,j));

    while(!Q.empty()||!Qnext.empty())
    {
        if(Q.empty())
        {
            while(!Qnext.empty())
            {
                Q.push(Qnext.front());
                Qnext.pop();
            }
            days++;
        }

        int x = Q.front().first;
        int y = Q.front().second;    
        Q.pop();
        if(x > 0 && map[x-1][y]==0)
        {
            map[x-1][y] = 1;
            Qnext.push(make_pair(x-1,y));
        }
        if(y > 0 && map[x][y-1]==0)
        {
            map[x][y-1] = 1;
            Qnext.push(make_pair(x,y-1));
        }
        if(x < N-1 && map[x+1][y]==0)
        {
            map[x+1][y] = 1;
            Qnext.push(make_pair(x+1,y));
        }
        if(y < M-1 && map[x][y+1]==0)
        {
            map[x][y+1] = 1;
            Qnext.push(make_pair(x,y+1));
        }
    }
    return days;
}
bool check(int N,int M)
{
    for(int i=0;i < N;i++)
        for(int j=0;j < M; j++)
            if(map[i][j] == 0)
                return false;
    return true;
}
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    for(int i=0;i < N;i++)
        for(int j=0;j < M;j++)
            scanf("%d",&map[i][j]); 
    if(check(N,M))
        printf("0");
    else
    {
        int days = BFS(0,N,M);
        if(!check(N,M))
            printf("-1");
        else
            printf("%d",days);
    }
}
