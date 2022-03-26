#include<stdio.h>
int main()
{
   long long int s1,e1,s2,e2;
   scanf("%lld%lld%lld%lld",&s1,&e1,&s2,&e2);
   if( s2>e1 || s1>e2)
    printf("-1");
   else
   {
       if(s1>=s2)
       {
           if(e1>=e2)
            printf("%lld %lld",s1,e2);
           else
            printf("%lld %lld",s1,e1);
       }
       else
       {
           if(e1>=e2)
            printf("%lld %lld",s2,e2);
           else
            printf("%lld %lld",s2,e1);
       }
   }

    return 0;
}
