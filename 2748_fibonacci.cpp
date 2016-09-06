#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long first = 0;
	long long second= 1;
	for(int i=0; i < n-1; i++)
	{
		
		long long next = first+second;
		first = second;
		second = next;
	}
	printf("%lld\n",second);
}
