#include<stdio.h>
int main()
{
	int N,X;
	scanf("%d %d",&N,&X);
	for(int i =0; i < N; i++)
	{
		int a;
		scanf("%d",&a);
		if( a < X)
			printf("%d ",a);
	}
}
