#include<stdio.h>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    char A[10001] = {};
    char B[10001] = {};
    char C[10002] = {};

    scanf("%s %s",A,B);
    
    int Alen = strlen(A);
    int Blen = strlen(B);
    int len = Alen > Blen? Alen:Blen;
    printf("%d %d, and %d\n",Alen,Blen,len);
    int diff = abs(Alen-Blen);
    printf("diff : %d\n",diff);
    memmove(B,B + diff, 10001 - diff);
    memset(B + 10001 - diff,'0',diff);
    printf("%s\n",B);
    for(int i=len-1; i >= 0 ; i--)
    {
        printf("A[%d] : %d , B[%d] : %d\n",i,int(A[i]),i,int(B[i]));
        C[i+1] += int(A[i]) + int(B[i]) - 96;
        if( C[i+1] > 9)
        {
            C[i+1] -= 10;
            C[i] += 1;
        }
    }

    for(int i=0; i < len+1; i++)
    {
        if(i==0 && C[0] == 0)
            continue;
        printf("%d",C[i]);
    }
}
