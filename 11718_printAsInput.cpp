#include<stdio.h>
int main()
{
    char s[100*100];
    while(fgets(s,101,stdin))
        printf("%s",s);
}
