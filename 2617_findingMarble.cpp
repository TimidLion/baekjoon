#include<stdio.h>
int marble[100][100];
int visit[100];

void DFS(int v,int N)
{
    visit[v] = 1;
    for(int i=1; i <= N; i++)
    {
        if(marble[v][i] == 1)
                printf("%d %d is visitied\n",v,i);
        if(marble[v][i] == 1 && visit[i] == 0)
        {
            printf("%d -> %d\n", v, i);
            DFS(i,N);
        }
    }
}

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int start,a;
    scanf("%d %d",&start,&a);
    marble[start][a] = 1;
    while(--M)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        marble[i][j] = 1;
    }
    printf("Start DFS\n");    
    for(int i=1; i <= N; i++)
    {
        for(int j=1; j <= N; j++)
            if(marble[i][j] == 1)
                DFS(start,N);
    }
}
