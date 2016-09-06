#include<stdio.h>
int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n%d\n%d\n",A*(B%10),A*(B%100/10),A*(B/100));
	printf("%d",A*B);
}
