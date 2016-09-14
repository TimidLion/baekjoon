#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);

	const int range = 1000;
	int* array = new int[range+1];
	for(int i =0; i < range+1; i++)
		array[i] = i;
	array[1] = 0;
	for(int f = 2; f <= range; f++)
	{
		if(array[f] == 0)
			continue;
		for(int j = 2; f*j <=range; j++)
			array[f*j] = 0;
	}

	int count = 0;
	for(int p = 0; p < N; p++)
	{
		int a;
		scanf("%d",&a);
		if( array[a] != 0)
			count++;
	}
	printf("%d",count);
}
