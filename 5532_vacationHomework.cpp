#include<stdio.h>
int main()
{
    int L,A,B,C,D;
    scanf("%d\n%d\n%d\n%d\n%d",&L,&A,&B,&C,&D);
    int langDay,mathDay;
    if(A%C != 0)
        langDay = A/C+1;
    else
        langDay = A/C;
    if(B%D != 0)
        mathDay = B/D+1;
    else
        mathDay = B/D;
    if(langDay > mathDay)
        printf("%d",L-langDay);
    else
        printf("%d",L-mathDay); 
}
