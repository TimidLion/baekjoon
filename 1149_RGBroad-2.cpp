#include<stdio.h>
#include<algorithm>
using namespace std;
int RGB[1000][3];
int DP[1000][3];
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i < N;i++)
    {
        int R,G,B;
        scanf("%d %d %d",&R,&G,&B);
        RGB[i][0] = R;
        RGB[i][1] = G;
        RGB[i][2] = B;
    }

    for(int i=0; i < 3; i++)
        DP[0][i] = RGB[0][i];

    for(int i=1;i < N;i++)
    {
        DP[i][0] = RGB[i][0]+min(DP[i-1][1],DP[i-1][2]);
        DP[i][1] = RGB[i][1]+min(DP[i-1][0],DP[i-1][2]);
        DP[i][2] = RGB[i][2]+min(DP[i-1][0],DP[i-1][1]);
    }

    printf("%d",min(min(DP[N-1][0],DP[N-1][1]),DP[N-1][2]));
}
