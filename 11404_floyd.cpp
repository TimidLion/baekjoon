#include<stdio.h>
#include<string.h>
#include<algorithm>
#define INF 100001
using namespace std;
int map[101][101];
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0;i < 101; i++)
        for(int j=0; j < 101; j++)
            map[i][j] = INF;

    int a,b,c;
    for(int i=0;i < m; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(map[a][b] > c)
            map[a][b] = c;
    }

    //Floyd Algorithm
    for(int k=1; k <= n; k++)
        for(int i=1; i <= n; i++)
            for(int j=1;j <= n; j++)
                map[i][j] = min(map[i][j],map[i][k]+map[k][j]);

    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= n; j++)
        {
            if(i==j)map[i][j] = 0;
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}
