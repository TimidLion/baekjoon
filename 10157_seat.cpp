#include<stdio.h>
int main()
{
	int C,R;
	scanf("%d %d",&C,&R);
	int K;
	scanf("%d",&K);
	if(K > C*R)
		printf("0");
	else
	{
		int x,y;
		bool x_plus = true,y_plus = true;
		for(x =C-1; x > 0; x--)
		{
			for(y = R; y > 0; y--)
			{
				if( K -y > 0)
					K -= y;
				else
					break;
				x_plus = !x_plus;
					
			}
			if( K - x > 0)
				K -= x;
			else
				break;
			y_plus = !y_plus;
		}

		if(x_plus)
			
	}	
}
