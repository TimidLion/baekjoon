#include<stdio.h>
int factorial(int);
int countUntilZero(int);
int main()
{
    int N;
    scanf("%d",&N);
    int num = factorial(N);
    int notZero = countUntilZero(num);
    printf("%d",notZero);
}

int factorial(int N)
{
    if(N == 0)
        return 1;
    int fac = 1;
    while(N > 0)
    {
        fac *= N;
        N -= 1;
    }
    return fac;
}

int countUntilZero(int N)
{
    int count = 0;
    while(N%10 == 0)
    {
        count++;
        N /= 10;
    }
    return count;    
}
