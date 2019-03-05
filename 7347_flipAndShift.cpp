#include <stdio.h>
int seq[30];
int main()
{
  int T;
  scanf("%d", &T);
  while(T--)
  {
    int n, len = 0;
    scanf("%d",&n);
    for(int i=0;i < n; i++)
    {
      scanf("%d",&seq[i]);
      if( seq[i] == 1 )
        len++;
    }
    
    //Solution
    for(int k=0; k < n-2; k++)
    {
      for(int i=k;i < n-2; i++)
      {
          if(seq[i] == 0 && seq[i+2] == 1)
          {
              seq[i] = 1;
              seq[i+2] = 0;
          }
      }
    }

    int count = 0;
    bool fail = true;
    for(int i=0;i < n; i++)
    {
      if(seq[i] == 1)
        count++;
      else
        if(len == count)
          break;
        else
          fail = false;
    }
    
    if(fail)
      printf("NO\n");
    else
      printf("YES\n");
  }
}
