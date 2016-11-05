#include<stdio.h>
int len[1001] = {};
int main()
{
    int arr[1001];
    int N;
    int maxLen = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    for(int i = 0; i < N; i++)
    {
        for(int j =0; j < i; j++)
        {
            if(arr[j] < arr[i] && len[j]+1 > len[i])
            {
                len[i] = len[j]+1;
                if(maxLen < len[i])
                {
                    maxLen = len[i];
                }
            }
        }
    }
    printf("%d",maxLen+1); 
}
