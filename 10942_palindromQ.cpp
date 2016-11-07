#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    int nums[100000];
    for(int i =0;i < N; i++)
    {
        scanf("%d",&nums[i]);
    }
    int M;
    scanf("%d",&M);
    for(int i=0; i < M; i++)
    {
        int s,e;
        bool isPalindrom = true;
        scanf("%d %d",&s,&e);
        for(int j=s-1; j <= (e+s-2)/2; j++)
        {
            if(nums[j] != nums[e+s-2-j])
            {
                isPalindrom = false;
                break;
            }
        }
        if(isPalindrom)
            printf("1\n");
        else
            printf("0\n");
    }
}
