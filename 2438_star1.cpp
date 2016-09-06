#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	for(int i =0;i < N; i++)
	{
		for(int j=N-i; j <= N; j++)
			printf("*");
		printf("\n");
	}
}
