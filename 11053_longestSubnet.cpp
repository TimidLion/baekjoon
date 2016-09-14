#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int* arr = new int[N];
	for(int i =0;i < N; i++)
		scanf("%d",&arr[i]);

	int* len = new int[N];
	int smallestLen = 0;
	for(int i =0;i < N; i++)
	{
		int now = arr[i];
		len[i] = 1;
		for(int j =i; j < N; j++)
		{
			if(now >= arr[j+1])
				continue;
			else
			{
				len[i]++;
				now = arr[j+1];
			}
		}
		if(len[i] > smallestLen)
			smallestLen = len[i];
	}
	printf("%d",smallestLen);
}
