#include<stdio.h>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
int parent[100001];
int findParent(int);
void unionParent(int,int);
int main()
{
    int V,E;
    scanf("%d %d",&V,&E);
    int start;
    priority_queue<pair<int, pair<int, int> > > Q;
    //initialize parent
    for(int i=1;i <= V; i++)
        parent[i] = i;

    for(int i=0;i < E; i++)
    {
        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);
        Q.push(make_pair(-1*C,make_pair(A,B)));
    }

    int sum = 0;
    pair<int, pair<int,int> > now;
    while(!Q.empty())
    {
        int cost = Q.top().first;
        pair<int,int> vertexes = Q.top().second;
        Q.pop();

        printf("%d and %d\n",vertexes.first,vertexes.second);
        for(int i=1; i <= V; i++)
            printf("parent[%d]:%d\n",i,parent[i]);

        if(findParent(vertexes.first) != findParent(vertexes.second))
        {
            sum += cost;
            unionParent(vertexes.first,vertexes.second);
        }
    }
    printf("%d",-1*sum);
    //delete[] edges;
}

int findParent(int a)
{
    if(parent[a] == a)
        return a;
    parent[a] = findParent(parent[a]);
    return parent[a];
}

void unionParent(int a,int b)
{
    a = findParent(a);
    b = findParent(b);
    if(a == b) return;
    parent[b] = a;
}
