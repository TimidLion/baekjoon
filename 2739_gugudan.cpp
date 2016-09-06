#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1; i<=9; i++)
		printf("%d * %d = %d\n",N,i,N*i);
}
