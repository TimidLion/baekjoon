#include<stdio.h>
int nums[10];
char inequality[9];
int main()
{
    int k;
    scanf("%d",&k);
    for(int i=0;i < k; i++)
        scanf("%c",&inequality[i]);

    int maxCount = 9;
    for(int i=0;i <= 9;i++)
    {
        int j = i;
        while(inequality[j] == '<')
        {
            maxCount--;
            j++;
        }
        j = i;
        while(inequality[j] == '<')
        {
            nums[j] = maxCount;
            j++;
            maxCount++;
        }
    }
}
