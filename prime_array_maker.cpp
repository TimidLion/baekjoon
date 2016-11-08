#include<stdio.h>

int main()
{
	int range = 10000;
	int* array = new int[range+1];
	for(int i =2; i < range+1; i++)
	{
		array[i] = i;
	}


	for(int f = 2; f <= range; f++)
	{
		if(array[f] == 0)
			continue;
		for(int j = 2; f*j <=range; j++)
			array[f*j] = 0;
	}

	printf("[ ");
	for(int p = 2; p <= range; p++)
		if( array[p] != 0)
			printf("%d, ",array[p]);
	printf("]\n");
}
