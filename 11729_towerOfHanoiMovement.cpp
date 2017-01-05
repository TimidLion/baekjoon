#include<stdio.h>
#include<string.h>
void hanoi(int,int,int);

int main()
{
    int N;
    scanf("%d",&N);
    long double count = 1;
    for(int i=1; i <= N; i++)
        count *= 2;
    char str[100000];
    sprintf(str,"%.0Lf",count);
    int size = strlen(str)-1;
    str[size] = (char)((int)str[size]-1);
    printf("%s\n",str);
    hanoi(N,1,3);
}

void hanoi(int N,int from, int to)
{
    if(N == 1)
    {
        printf("%d %d\n",from,to);
        return;
    }
    else
    {
        int tmp = 6-from-to;

        hanoi(N-1,from,tmp);
        printf("%d %d\n",from,to);
        hanoi(N-1,tmp,to);
    }
}
