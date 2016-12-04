#include<stdio.h>
#include<queue>
int map[401][401];
//int visit[401];
using namespace std;
bool BFS(int v,int n,int end)
{
    queue<int> Queue;
    int visit[401] = {};
    visit[v] = 1;
    Queue.push(v);
    while(!Queue.empty())
    {
        v = Queue.front();
        Queue.pop();
        for(int i=1; i <= n; i++)
        {
            if(map[v][i] == 1 && i == end)
                return true;
            if(map[v][i] == 1 && !visit[i])
            {
                visit[i] = 1;
                Queue.push(i);
            }
        }
    }
    return false;
}

/*
bool DFS(int v, int n,int end)
{
    visit[v] = 1;
    for(int i=1; i <=n; i++)
    {
        if(map[v][i] == 1 && i == end)
            return true;
        if(map[v][i] == 1 && !visit[i])
        {
            printf("%d -> %d\n",v,i);
            DFS(i,n,end); 
        }
    }
    for(int i=1; i <=n; i++)
        visit[i] = 0;
    return false;
}
*/
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
