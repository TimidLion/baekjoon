#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int connection[101][101];
    for(int i=1; i <= N; i++)
    {
        for(int j=1; j <= N; j++)
        {
            if(i==j)
                connection[i][j] = 0;
            else
                connection[i][j] = connection[i][j] = 5001;
        }
    }

    for(int i=0;i < M; i++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        connection[A][B] = connection[B][A] = 1;
    }

    for(int k=1; k <= N; k++)
        for(int i=1; i <= N;i++)
            for(int j=1; j <= N;j++)
                connection[i][j] = min(connection[i][j],connection[i][k]+connection[k][j]);
    
    int minimum = 5001,minimumPerson;
    for(int i=1; i<= N; i++)
    {
        int baconNum = 0;
        for(int j=1; j<= N; j++)
        {
            if(connection[i][j] != 5001)
                baconNum += connection[i][j];
        }

        if(minimum > baconNum)
        {
            minimum = baconNum;
            minimumPerson = i;
        }
    }
    printf("%d",minimumPerson);
}
