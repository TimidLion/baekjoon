#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int computer = 1;
	for(int i =0;i < N;i++)
	{
		int a;
		scanf("%d",&a);
		computer += a-1;
	}
	printf("%d",computer);
}
