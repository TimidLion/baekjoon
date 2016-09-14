#include<stdio.h>

int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	int* array = new int[N+1];
	for(int i =2; i < N+1; i++)
	{
		array[i] = i;
	}


	for(int f = 2; f <= N; f++)
	{
		if(array[f] == 0)
			continue;
		for(int j = 2; f*j <=N; j++)
			array[f*j] = 0;
	}

	for(int p = M; p <= N; p++)
		if( array[p] != 0)
			printf("%d\n",array[p]);
}
