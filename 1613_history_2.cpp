#include<stdio.h>
int map[401][401];
int front,rear;
int queue[50000];
//int visit[401];
bool BFS(int v,int n,int end)
{
    int visit[401] = {};
    visit[v] = 1;
    queue[rear++] = v;
    while(front < rear)
    {
        v = queue[front++];
        for(int i=1; i <= n; i++)
        {
            if(map[v][i] == 1 && i == end)
                return true;
            if(map[v][i] == 1 && !visit[i])
            {
                visit[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    return false;
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    while(k--)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        map[i][j] = 1;
        map[j][i] = -1;
    }
    int s;
    scanf("%d",&s);
    while(s--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int answer;
        if(BFS(a,n,b))
            answer = -1;
        else if(BFS(b,n,a))
            answer = 1;
        else
            answer = 0;
        printf("%d\n",answer);
    } 
}
