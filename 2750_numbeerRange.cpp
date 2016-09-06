#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int* numbers = new int[N];
	for(int i=0; i < N; i++)
		scanf("%d",&numbers[i]);

	for(int n=N-1; n> 0; n--)
	{
		for(int i=1; i <= n; i++)
		{
			if(numbers[i] < numbers[i-1])
			{
				int tmp = numbers[i];
				numbers[i] = numbers[i-1];
				numbers[i-1] = tmp;
			}
		}
	}

	for(int i=0; i < N; i++)
		printf("%d\n",numbers[i]);
	
}
