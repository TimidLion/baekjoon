#include<stdio.h>
int sumOfDigit(int);
int main()
{
    unsigned long long L,U;
    scanf("%lld %lld",&U,&L);
    unsigned long long sum = sumOfDigit(L)-sumOfDigit(U);
    printf("%lld",sum);
}

int sumOfDigit(int num)
{
    
}
