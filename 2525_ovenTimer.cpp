#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int C;
    scanf("%d",&C);

    if(C > 60)
    {
        A += C/60;
        C = C%60;
    }
    B += C;
    if( B > 60 )
    {
        A += 1;
        B -= 60;
    }
    if( A > 23 )
        A -= 24;
    printf("%d %d\n",A,B);
}
