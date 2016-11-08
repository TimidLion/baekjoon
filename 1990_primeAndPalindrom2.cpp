#include<stdio.h>
#include<string.h>
bool isPalindrom(int);
bool isPrime(int);
int nums[10000000];
int palindroms[10000000];
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int indx = 0;
    if(b > 10000000)
        b = 10000000;
    for(int i=a; i<=b; i++)
    {
        if(isPalindrom(i))
        {
            palindroms[indx] = i;
            indx++;
        }
    }
    for(int i=0; i< indx; i++)
    {
        if(isPrime(palindroms[i]))
            printf("%d\n",palindroms[i]);
    }
    printf("-1");
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
