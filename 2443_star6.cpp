#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
		for(int k = n; k > 0; k--)
		{
			for(int j = k; j < n; j++)
				printf(" ");
			for(int star = 2*k-1; star > 0; star--)
				printf("*");
			printf("\n");
		}
}
