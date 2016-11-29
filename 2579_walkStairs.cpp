#include<stdio.h>
#include<algorithm>
int stair[301];
int grade[301][2];
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i < N;i++)
        scanf("%d",&stair[i]);

    grade[N-1][1] = stair[N-1];
    grade[N-1][0] = 0;
    for(int i=N-1;i >=1;i--)
    {
        if(grade[i][1] != 0)
            grade[i-1][0] = grade[i][1]+stair[i-1];
        else
            grade[i-1][0] = 0;
        if(i != 1)
            grade[i-2][1] =max(grade[i][0]+stair[i-2],grade[i][1]+stair[i-2]);
    }

    for(int i=0;i < N;i++)
        printf("%d: %d %d \n",i,grade[i][0],grade[i][1]);
    printf("%d",max(grade[0][0],grade[0][1]));
}
