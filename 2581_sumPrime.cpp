#include<stdio.h>

int main()
{
	int M,N;
	scanf("%d\n%d",&M,&N);
	int* array = new int[N+1];
	for(int i =0; i < N+1; i++)
		array[i] = i;
	array[1] = 0;
	for(int f = 2; f <= N; f++)
	{
		if(array[f] == 0)
			continue;
		for(int j = 2; f*j <=N; j++)
			array[f*j] = 0;
	}

	int sum = 0;
	int smallest;
	bool isSmall = true;
	for(int p = M; p <= N; p++)
	{
		if( array[p] != 0)
		{	
			if(isSmall)
			{
				smallest = array[p];
				isSmall = false;
			}
			sum += array[p];
		}
	}
	if(!sum)
		printf("-1");
	else
		printf("%d\n%d",sum,smallest);
}
