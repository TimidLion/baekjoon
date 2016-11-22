#include<stdio.h>

int main()
{
	int N,S;
	scanf("%d %d",&N,&S);
	int* arr = new int[N];
	for(int i =0; i < N; i++)
		scanf("%d",&arr[i]);
    int sum = 0,count = 0;
    for(int k = 0;k < N; k++)
    {
        for(int i =0;i < N; i++)
        {
            for(int j =i+1;j < N; j++)
            {
                sum = arr[k] + arr[i];
            }
        }
    }
}
