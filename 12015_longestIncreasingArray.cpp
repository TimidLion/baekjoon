#include<stdio.h>
#include<algorithm>
int arr[1000001];
int tree[3*1000001];
int update(int*,int,int,int,int,int);
int getMax(int*,int,int,int,int,int);

int main()
{
    int N;
    scanf("%d",&N);
    int MAX = 0;
    for(int i=1;i <= N;i++)
    {
        scanf("%d",&arr[i]);
        MAX = std::max(arr[i],MAX);
    }

    for(int i=1;i <= N; i++)
    {
        int maxVal = getMax(tree,1,1,MAX,1,arr[i]-1)+1;
        update(tree,1,1,MAX,arr[i],maxVal);
/*        for(int i=1;i <= MAX*3; i++)
            printf("%d ",tree[i]);
        printf("\n");
*/
    }
    printf("%d",tree[1]);
}

int update(int* tree,int node, int start, int end, int index, int maxVal)
{
    if(index < start || index > end)
        return 0;
    tree[node] = std::max(maxVal,tree[node]);
    if(start != end)
    {
        update(tree,node*2,start,(start+end)/2,index,maxVal);
        update(tree,node*2+1,(start+end)/2+1,end,index,maxVal);
    }
}

int getMax(int* tree,int node,int start, int end, int L, int R)
{
    if( L > end || R < start)
        return 0;
    if(L <= start && end <= R)
        return tree[node];
    return std::max(getMax(tree,node*2,start,(start+end)/2,L,R),getMax(tree,node*2+1,(start+end)/2+1,end,L,R));
}
