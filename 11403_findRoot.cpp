#include<stdio.h>
#include<algorithm>
using namespace std;
int map[101][101];
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i <= N;i++)
        for(int j=1;j <= N;j++)
            scanf("%d",&map[i][j]);

    
    //Floyd algorithm
    for(int k=1; k <= N; k++)
        for(int i=1; i <=N; i++)
            for(int j=1; j<=N; j++)
            {
                if(map[i][k] && map[k][j])
                    map[i][j] = 1;
            }

    for(int i=1; i<=N;i++)
    {
        for(int j=1; j<=N;j++)
                printf("%d ",map[i][j]);
        printf("\n");
    }
}
