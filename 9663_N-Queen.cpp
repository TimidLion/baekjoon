#include<stdio.h>
#include<cmath>
using namespace std;
int N;
int col[15];

bool promising(int n)
{
    for(int i=0;i < n;i++)
    {
        if(col[i] == col[n])
            return false;
        if(abs(col[i]-col[n]) == abs(i-n))
            return false;
    }
    return true;
}

int main()
{
    scanf("%d",&N);

    for(int i=1; i <= N; i++)
    {
        for(int j=1; j <= N; j++)
        {
            col[i] = j;
            if(promising(j))
                break;
        }
    }
}
