#include <stdio.h>
int main()
{
    int N,i,X,Y,S,Z;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
      scanf("%d%d",&X,&Y);
      Z=(abs(X-Y));
      if (Z<=2)
      {
          if(X % 2 == 0)
    {
        X++;
    }

    /* Iterate from start to end and find sum */
    for(i=X; i<=Y; i+=2)
    {
        S += i;
    }
      }
      else
      {
          printf("0\n");
      }

    }
}
