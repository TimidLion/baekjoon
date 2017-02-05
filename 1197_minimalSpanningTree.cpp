#include<stdio.h>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int visited[10001];
int main()
{
    int V,E;
    scanf("%d %d",&V,&E);
    int start;
    vector<pair<int, int> >* edges = new vector<pair<int,int> >[V+1];
//    vector<pair<int, int> > edges[V+1];
    for(int i=0;i < E; i++)
    {
        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);
        edges[A].push_back(make_pair(-1*C,B));
        edges[B].push_back(make_pair(-1*C,A));
    }

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
    delete[] edges;
}
