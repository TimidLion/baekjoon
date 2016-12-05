#include<stdio.h>
#include<queue>
int map[401][401];
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    while(k--)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        map[i][j] = -1;
        map[j][i] = 1;
    }

    for(int k=1; k <= n; k++)
        for(int i=1; i <= n; i++)
            for(int j=1; j <= n; j++)
            {
                if(map[i][k] == 1 && map[k][j] == 1)
                    map[i][j] = 1;
                if(map[i][k] == -1 && map[k][j] == -1)
                    map[i][j] = -1;
            }

    int s;
    scanf("%d",&s);
    while(s--)
    {
        int a,b;
        scanf("%d %d",&a,&b);        
        int answer;
        if(map[a][b] != 0)
            answer = map[a][b];
        else if(map[b][a] != 0)
            answer = map[b][a];
        else
            answer = map[a][b];
        printf("%d\n",answer);
    } 
}
