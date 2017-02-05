#include<stdio.h>
#define INF 2147483647
typedef pair<int,int> ij;
int maze[101][101];
int dist[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=1;i <= N; i++)
        for(int j=1; j <= M; j++)
            scanf("%1d",&maze[i][j]);

    for(int i=1;i <= N; i++)
    {
        for(int j=1;j <= M; j++)
            printf("%d",maze[i][j]);
        printf("\n");
    }

    for(int i=1;i <= N; i++)
        for(int j=1;j <= M; j++)
            dist[i][j] = INF;

    priority_queue<pair<int,ij> > pq;
    ij s = make_pair(1,1);
    pq.push(ij(0,s));
    
    while(!pq.empty() || pq.second.top().first == N-1 && pq.second.top().second == M-1)
    {
        ij curr = pq.top();
        int currXY = curr.second;
        int cost = curr.first;
        pq.pop();
        if(dist[currXY.first][currXY.second] < cost)
            continue;
        for(int i=0; i < 
        {

        }
    }
}
