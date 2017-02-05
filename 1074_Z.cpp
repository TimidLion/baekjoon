#include<stdio.h>
#include<cmath>
int z(int n, int r, int c)
{
    if( n == 2 )
    {
        if(r==0)
        {
            if(c==0)
                return 1;
            else
                return 2;
        }
        else
        {
            if(c==0)
                return 3;
            else
                return 4;
        }
    }

    int half = n/2;
    if( r < half )
    {
        if( c < half )
        {//(0,0)
            return z(half,r,c);
        }
        else
        {//(1,0)
            return half*half + z(half,r,c-half);
        }
    }
    else
    {
        if( c < half )
        {//(0,1)
            return half*half*2 + z(half,r-half,c);
        }
        else
        {//(1,1)
            return half*half*3 + z(half,r-half,c-half);
        }
    }
}
int main()
{
    int N,r,c;
    while(scanf("%d %d %d",&N,&r,&c) != EOF)
    {
        int n = pow(2,N);
        printf("%d\n",z(n,r,c)-1);        
    }
}
