#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int middleNum;
    if(A > B)
    {
        if(B > C)
            middleNum = B;
        else
        {
            if(A > C)
                middleNum = C;
            else
                middleNum = A;       
        }
    }
    else
    {
        if(A > C)
            middleNum = A;
        else
        {
            if(B > C)
                middleNum = C;
            else
                middleNum = B;
        }

    }
    printf("%d",middleNum);
}
