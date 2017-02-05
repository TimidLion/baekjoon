#include<stdio.h>
#include<string.h>
#include<algorithm>
char word[5001];
int arr[5001][5001];
using namespace std;
int main()
{
    int N;
    scanf("%d\n",&N);
    for(int i=0;i < N;i++)
        scanf("%c",&word[i]);

    for(int i=0;i <= N; i++)
        arr[i][0] = 0;
    for(int i=0;i <= N; i++)
        arr[0][i] = 0;

    int maxVal = 0;
    for(int i=1; i <= N; i++)
    {
        for(int j=N; j > 0; j--)
        {
            if(word[i-1] == word[j-1])
                arr[i][N-j] = arr[i-1][N-j-1] + 1;
            else
                arr[i][N-j] = max(arr[i-1][N-j],arr[i][N-j-1]);
            maxVal = max(maxVal,arr[i][N-j]);
        }
    }            
    printf("%d",N-maxVal);
}
