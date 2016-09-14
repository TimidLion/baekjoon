#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int* arr = new int[N+1];
	for(int i =1;i <= N;i++)
		scanf("%d",&arr[i]);
	
	int i,j,tmp;
	int change;
	for(i =1; i<= N;i++)
	{
		change = 0;
		for(j =1;j<=N-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				change = 1;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=arr[j];
			}
		}
		if(change == 0)
			break;
	}
	printf("%d\n",i);
}

