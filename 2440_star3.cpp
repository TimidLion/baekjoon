#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i =0; i < N; i++)
	{
		for(int s=N-i; s >0;s--)
			printf("*");
		printf("\n");
	}
}
