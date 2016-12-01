#include<stdio.h>
void swap(int* arr,int i,int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

int main()
{
	int arr[3];
	for(int i =0;i < 3;i++)
		scanf("%d",&arr[i]);

    if(arr[0] > arr[1])
        swap(arr,0,1);
    if(arr[1] > arr[2])
        swap(arr,1,2);
    if(arr[0] > arr[1])
        swap(arr,0,1);
	for(int i =0;i < 3; i++)
		printf("%d ",arr[i]);
}

