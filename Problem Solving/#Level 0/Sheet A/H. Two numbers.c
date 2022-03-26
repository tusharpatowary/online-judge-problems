#include<stdio.h>
int main()
{
    int a,b,x;
    float c,d;
    scanf("%d%d",&a,&b);
    d=b;
    c=a/d;
    x=c;
    printf("floor %d / %d = %d\n",a,b,x);
    if(a!=b)
        printf("ceil %d / %d = %d\n",a,b,x+1);
    else
        printf("ceil %d / %d = %d\n",a,b,x);
    if(c>=x+0.5)
        printf("round %d / %d = %d\n",a,b,x+1);
    else
        printf("round %d / %d = %d\n",a,b,x);
    return 0;
}
