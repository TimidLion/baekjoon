#include<stdio.h>
#include<algorithm>
int nums[1000001];
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    nums[1] = 0;
    nums[2] = 1;
    nums[3] = 1;
    for(int i=4; i <= N; i++)
    {
        if(i%2 == 0 && i%3 == 0)
            nums[i] = min(min(nums[i/2]+1,nums[i/3]+1),nums[i-1]+1);
        else if(i%2 == 0)
            nums[i] = min(nums[i/2]+1,nums[i-1]+1);
        else if(i%3 == 0)
            nums[i] = min(nums[i/3]+1,nums[i-1]+1);
        else
            nums[i] = nums[i-1]+1;
    }
    printf("%d",nums[N]);
}
