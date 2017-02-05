#include<stdio.h>
#include<queue>
#include<utility>
#include<vector>
#include<math.h>
using namespace std;
struct Spacegod
{
    int x;
    int y;
    Spacegod(int _x,int _y)
    {
        x = _x;
        y = _y;
    };
};
Spacegod* gods[1001];
int visited[1001];
int getLength(int,int);

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int start;
    vector<pair<int, int> >* edges = new vector<pair<int,int> >[N+1];
//  above is same with vector<pair<int, int> > edges[V+1];

    //Get all Spacegods coordinate
    for(int i=1; i<=N; i++)
    {
        int x, y;
        scanf("%d %d",&x,&y);
        Spacegod* god = new Spacegod(x,y);
        gods[i] = god;
    }

    //
    for(int i=0; i < M; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int cost = getLength(a,b);
        edges[a].push_back(make_pair(cost,b));
        edges[b].push_back(make_pair(cost,a));
        printf("edges[a] : cost(%d), node(%d)
    }

/*
    int sum = 0,curr;
    priority_queue<pair<int,int> > EQ;
    for(int j=1; j <= V; j++)
    {
        if(edges[j].size() != 0)
        {
            for(int i=0; i< edges[j].size();i++)
                EQ.push(edges[j][i]);
            visited[j] = 1;
            curr = j;
            break;
        }
    }

    pair<int, int> now;
    while(!EQ.empty())
    {
        now = EQ.top();
        if(visited[now.second] == 1)
        {
            EQ.pop();
            continue;
        }
        sum += now.first;
        visited[now.second] = 1;
        curr = now.second;
        EQ.pop();

        //push edges of newly added vertex of MST
        for(int iter=0;iter < edges[curr].size(); iter++)
        {
            //printf("visited of %d is %d\n",edges[curr][iter].second,visited[edges[curr][iter].second]);
            if(visited[edges[curr][iter].second] == 1)
                continue;
            EQ.push(edges[curr][iter]);
            //printf("Edges[%d][%d] : %d & %d is pushed\n",curr,iter,edges[curr][iter].first,edges[curr][iter].second);
        }   
    }
    
    printf("%d",-1*sum);
*/
    delete[] edges;
}

int getLength(int a, int b)
{
    int ax,ay,bx,by;
    ax = gods[a]->x;
    ay = gods[a]->y;
    bx = gods[b]->x;
    by = gods[b]->y;
    return sqrt(double((ax-bx)*(ax-bx)+(ay-by)*(ay-by)));    
}
