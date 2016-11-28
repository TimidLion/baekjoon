#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    int* w = new int[N];
    for(int i =0;i < N; i++)
        scanf("%d",&w[i]);
    sort(w,w+N);
    int weight = 0,nums=0;
    for(int i=N-1;i >= 0; i--)
    {
        if(weight < w[i]*(N-i))
            weight = w[i]*(N-i);
    }
    printf("%d",weight);
}
