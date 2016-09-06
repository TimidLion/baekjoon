#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
		for(int k =1; k < n; k++)
		{
			for(int j =n-k; j > 0; j--)
				printf(" ");
			for(int star =0; star < 2*k-1; star++)
				printf("*");
			printf("\n");
		}
		for(int k = n; k > 0; k--)
		{
			for(int j = k; j < n; j++)
				printf(" ");
			for(int star = 2*k-1; star > 0; star--)
				printf("*");
			printf("\n");
		}
}
