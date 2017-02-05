#include<stdio.h>
#include<string.h>

int main()
{
    char S[101];
    scanf("%s",S);
    for(int c='a';c <= 'z'; c++)
    {
        int position = -1;
        for(int i=strlen(S)-1;i >= 0; i--)
            if(S[i] == char(c))
                position = i;
        printf("%d ",position);
    }    
}
