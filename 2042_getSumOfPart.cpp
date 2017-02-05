#include<stdio.h>
long long nums[1000001];
long long tree[3000003];
long long init(long long*,long long*,int,int,int);
long long sum(long long*,int,int,int,int,int);
void update(long long*,int,int,int,int,int);
void print();
int main()
{
    int N,M,K;
    scanf("%d %d %d",&N,&M,&K);
    for(int i=1;i <= N;i++)
        scanf("%lld",&nums[i]);
    init(nums,tree,1,1,N);
    for(int i=0;i < M+K; i++)
    {
        int a,b;
        long long c;
        scanf("%d %d %lld",&a,&b,&c);
        if( a == 1)
        {
            update(tree,1,1,N,b,c-nums[b]);            
        }
        else
        {
            printf("%lld\n",sum(tree,1,1,N,b,c));
        }
    }
}

long long init(long long* nums,long long* tree,int node, int start,int end)
{
    if(start == end)
        return tree[node] = nums[start];
    else
        return tree[node] = init(nums,tree,node*2,start,(start+end)/2) + init(nums,tree,node*2+1,(start+end)/2+1,end);
}

long long sum(long long* tree, int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    return sum(tree,node*2,start,(start+end)/2,left,right) + sum(tree,node*2+1,(start+end)/2+1,end,left,right);
}

void update(long long* tree,int node,int start,int end, int index, int diff)
{
    if(index < start || index > end)
        return;
    tree[node] = tree[node] + diff;
    if(start != end)
    {
        update(tree,node*2,start,(start+end)/2,index,diff);
        update(tree,node*2+1,(start+end)/2+1,end,index,diff);
    }
}
