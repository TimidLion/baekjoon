#include<stdio.h>
int rear, front;
int map[100][100],queue[100],visit[100];
int chonsu[100];

int BFS(int v,int n,int end)
{
    visit[v] = 1;
    queue[rear++] = v;
    while(front < rear)
    {
        v = queue[front++];
        for(int i=1; i <= n; i++)
        {
            if(map[v][i] == 1 && i == end)
                return chonsu[v]+1;
            if(map[v][i] == 1 && !visit[i])
            {
                visit[i] = 1;
                queue[rear++] = i;
                chonsu[i] = chonsu[v] +1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d %d",&a,&b);
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        map[i][j] = map[j][i] = 1;
    }
    
    printf("%d",BFS(a,n,b));
}
