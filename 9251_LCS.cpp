#include<stdio.h>
int len[4001][4001];

int main()
{
    char A[1001];
    char B[1001];
    scanf("%d\n%d",A,B);

    for(int i =0; i < A.length(); i++)
    {
        for(int j =0; j < B.length(); j++)
        {
            if(A[i] == B[j])
            {
                if(i==0 || j == 0)
                    len[i][j] = 1;
                else
                    len[i][j] = len[i-1][j-1] + 1;
            }
            if(answer < len[i][j])
                answer = len[i][j];
        }
    }
    cout << answer << endl;
}
