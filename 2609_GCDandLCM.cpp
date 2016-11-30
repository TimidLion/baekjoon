#include<stdio.h>
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int lcm(int a,int b)
{
    int commonDivisor = gcd(a,b);
    return commonDivisor*(a/commonDivisor)*(b/commonDivisor);
}

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d\n%d\n",gcd(A,B),lcm(A,B));
}
