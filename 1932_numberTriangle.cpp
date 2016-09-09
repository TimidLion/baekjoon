#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int** arr = new int*[N+1];
	for(int i=0; i <= N; i++)
		arr[i] = new int[N+1];
	int max = 0;
	for(int i =1; i <= N; i++)
	{
		for(int j =1; j <= i; j++)
		{
			int a;
			scanf("%d",&a);
			if(arr[i-1][j-1] > arr[i-1][j])
				arr[i][j] = arr[i-1][j-1] + a;
			else
				arr[i][j] = arr[i-1][j] + a;
			if(max < arr[i][j])
				max = arr[i][j];
		}
	}

	printf("%d",max);
	for(int i =0;i < N+1; i++)
		delete[] arr[i];
	delete [] arr;
}
