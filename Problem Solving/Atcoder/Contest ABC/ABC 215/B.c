#include <stdio.h>
#include <math.h>
int main()
{
   long double  N;
   int R;
   scanf("%Lf",&N);
    printf("%Lf\n",N);
   printf("%d",(int)(floor(log2(N))));
   return 0;
}
