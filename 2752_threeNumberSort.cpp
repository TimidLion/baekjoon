#include<stdio.h>
int main()
{
	const int N = 3;
	int arr[N];
	for(int i =0;i < N;i++)
		scanf("%d",&arr[i]);
	
	int i,j,tmp;
	for(i =1; i<= N-1;i++)
	{
		for(j =i;j<=N-1;j++)
		{
			if(arr[j-1] > arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=arr[j];
			}
		}
	}
	for(int i =0;i < N; i++)
		printf("%d\n",arr[i]);
}

