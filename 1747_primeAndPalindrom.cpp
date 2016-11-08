#include<stdio.h>
#include<string.h>
bool isPalindrom(int);
bool isPrime(int);
int nums[1000000];
int Dp[100000] = {};

int main()
{
    int N;
    scanf("%d",&N);
    while(1)
    {
        if(isPalindrom(N)&&isPrime(N))
        {
            printf("%d",N);
            break;
        }
        N++;
    }   
}

bool isPalindrom(int N)
{
    int i =0;
    bool palindrom = true;
    while(N !=0)
    {
        nums[i] = N%10;
        i++;
        N /= 10;
    }
    int len = i;
    for(int i=0;i < len/2; i++)
        if(nums[i] != nums[len-1-i])
            palindrom = false;
    return palindrom;
}

bool isPrime(int N)
{
    for(int i=2; i*i <= N;i++)
    {
        if(N%i == 0)
        {
            return false;
        }
    }
    return true;
}
