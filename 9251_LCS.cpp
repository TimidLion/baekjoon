#include<stdio.h>
#include<string.h>
int len[4001][4001];

int main()
{
    char A[1001];
    char B[1001];
    scanf("%s%s",A,B);
    
    int answer = 0;
    for(int i =0; i < strlen(A); i++)
    {
        for(int j =0; j < strlen(B); j++)
        {
            if(A[i] == B[j])
            {
                if(i == 0 || j == 0)
                    len[i][j] = 1;
                else
                    len[i][j] = len[i-1][j-1] + 1;
                if( i != strlen(A)-1) i++;
            }
            else
            {
                if(j != 0)
                    len[i][j] = len[i][j-1];
            }
            if(answer < len[i][j])
                answer = len[i][j];
        }
    }
    printf("%d",answer);
}
