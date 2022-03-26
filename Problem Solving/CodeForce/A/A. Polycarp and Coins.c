#include<stdio.h>
int main()
{
    int i=0,t=0,n=0,c=0;
    scanf("%d",&t);
    for(i;i<t;i++)
    {
        scanf("%d",&n);
        c=n/3;
        if(n%3==0)
        {
            printf("%d %d\n",c,c);
        }
        else if(n%3==2)
        {
            printf("%d %d\n",c,c+1);
        }
        else
        {
           printf("%d %d\n",c+1,c);
        }
    }
    return 0;
}
