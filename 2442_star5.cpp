#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
		for(int k =1; k <= n; k++)
		{
			for(int j =n-k; j > 0; j--)
				printf(" ");
			for(int star =0; star < 2*k-1; star++)
				printf("*");
			printf("\n");
		}
}
