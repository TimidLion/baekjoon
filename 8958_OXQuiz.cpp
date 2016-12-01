#include<stdio.h>
#include<string.h>
char test[80];
int grade[80];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",test);
        if(test[0] == 'O')
            grade[0] = 1;
        else
            grade[0] = 0;
        int sum = grade[0];
        for(int i=1;i < strlen(test);i++)
        {
            if(test[i]=='O')
                grade[i] = grade[i-1] + 1;
            else
                grade[i] = 0;
            sum += grade[i];
        }
        printf("%d\n",sum);
    }
}
