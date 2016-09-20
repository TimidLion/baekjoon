#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%s",arr);
	int i = 1;
	do
	{
		printf("%c",arr[i-1]);
		if(i%10 == 0)
			printf("\n");
		i++;
	}
	while(arr[i-1] != '\0');
}
