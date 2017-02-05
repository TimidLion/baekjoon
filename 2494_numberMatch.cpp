#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
//DP[0][*] is 'left' and DP[1][*] is 'right'
int DP[2][10001];
int N;
void move(char*,int,int);
int main()
{
    scanf("%d",&N);
    char* init = new char[N];
    char* goal  = new char[N];
    scanf("%s\n%s",init,goal);

    int revolving = 0;
    for(int i=1;i <= N; i++)
    {
        int count = min(DP[0][i],DP[1][i]);
        move(init,i,count);
        printf("%s\n",init);
        revolving += abs(count);
    }
    printf("%d\n",revolving);
    delete init;
    delete goal;
}
//indx is nasa number.
void move(char* num,int indx,int count)
{
    indx -= 1;
    if(count > 0)
    {
        while(indx != N)
        {
            num[indx] += count;
            if(num[indx] > '9')
                num[indx] -= 10;
            indx++;
        }
    }
    else
    {
        num[indx] += count;
        if( num[indx] < '0')
            num[indx] += 10;
    }
}
