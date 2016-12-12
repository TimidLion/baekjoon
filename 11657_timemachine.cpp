#include<stdio.h>
#define INF 2147483647
int upper[501];
int map[501][501];
using namespace std;
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);

    for(int i=0; i < 501; i++)
        for(int j=0; j <  501; j++)
            map[i][j] = INF;

    for(int i=0;i < M; i++)
    {
        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);
        if(map[A][B] > C)
            map[A][B] = C;
    }

    //BellmanFord algorithm
    for(int i=0; i< 501; i++)
        upper[i] = INF;
    upper[1] = 0;
    bool updated;
    for(int iter=1; iter <= N; iter++)
    {
        updated = false;
        for(int i=1;i <= N;i++)
        {
            for(int j=1;j <= N;j++)
            {
                if(map[i][j] != INF && upper[i] != INF)
                {
                    if(upper[j] > upper[i]+map[i][j])
                    {
                        updated = true;
                        upper[j] = upper[i] + map[i][j];
                    }
                }
            }
        }
        if(!updated)
            break;
    }
    if(updated)
    {
        printf("-1\n");
        return 0;
    }
    if(N == 1)
    {
        printf("-1\n");
        return 0;
    }
    for(int i=2; i <= N; i++)
    {
        if(upper[i] == INF)
            upper[i] = -1;
        printf("%d\n",upper[i]);
    }
}
