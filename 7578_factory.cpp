#include<stdio.h>
#include<map>
using namespace std;

int N;
int tree[500001];
int sum(int);
void update(int,int);

int main()
{
    scanf("%d",&N);
    map<int,int> A;
    map<int,int> B;
    for(int i=1;i <= N; i++)
    {
        int a;
        scanf("%d",&a);
        A.insert(map<int,int>::value_type(i,a));
    }
    for(int i=1;i <= N;i++)
    {
        int b;
        scanf("%d",&b);
        B.insert(map<int,int>::value_type(b,i));
    }

    int ans = 0;
    for(int i=1;i <= N;i++)
    {
        int key = A.find(i)->second;
        int indx = B.find(key)->second;
        int sumVal = sum(N) - sum(indx);
        ans += sumVal;
        update(indx,1);
    }
    printf("%d",ans);
}

int sum(int i)
{
    int ans = 0;
    while( i > 0 )
    {
        ans += tree[i];
        i -= (i & -i);
    }
    return ans;
}

void update(int i,int num)
{
    while(i <= N)
    {
        tree[i] += num;
        i += (i & -i);
    }
}
