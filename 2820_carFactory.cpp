#include<stdio.h>
#include<queue>
int pay[500000];
//int visit[401];
using namespace std;

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int a;
    scanf("%d",&a);
    pay[1] = a;
    while(--N)
    {
        int i,money;
        scanf("%d %d\n",&i,&money);
        pay[i] = money;
    }
    while(M--)
    {
        char ch;
        int a,x;
        char s[6];
        fgets(s,7,stdin);
        printf("%s",s);
        /*
        if(ch == 'p')
        {
            DFS(a,N,x);
        }
        else if(ch == 'u')
        {
            printf("%d\n",pay[
        }
        */
    } 
}
