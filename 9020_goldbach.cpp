#include <stdio.h>
int array[10001];

int prime()
{
    int range = 10000;
	for(int i =2; i < range+1; i++)
		array[i] = i;

	for(int f = 2; f <= range; f++)
	{
		if(array[f] == 0)
			continue;
		for(int j = 2; f*j <=range; j++)
			array[f*j] = 0;
	}
}

int main()
{
    prime();
    int n, first, second;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        int num;
        scanf("%d",&num);
        for(int i=num/2;i > 1;i--)
        {
            if(!array[i])
                continue;
            int p = array[i];
            if(array[num-p])
            {
                first = p;
                second = num-p; 
                break;
            }
        }
        printf("%d %d\n",first,second);
    }
}
