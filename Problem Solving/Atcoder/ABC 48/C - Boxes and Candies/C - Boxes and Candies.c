#include<stdio.h>
int main()
{
    int n,i,x,e=0,j;
    scanf("%d %d",&n,&x);
    int na[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&na[i]);
    }
    int nsum[n-1];
    for (i=0;i<n-1;i++)
    {
        while((na[i]+na[i+1])>x)
        {
            na[i+1]=na[i+1]-1;
            e++;
        }
    }
    printf("%d",e);
    return 0;
}
