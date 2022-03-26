#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
     if(a>b && a>c)
     {
        x=a;
        if(b>c)
            y=c;
        else
            y=b;
     }
    else if(b>c)
    {
        x=b;
        if(a>c)
            y=c;
        else
            y=a;
    }
    else
    {
        x=c;
        if(a>b)
            y=b;
        else
            y=a;
    }
    printf("%d %d",y,x);
    return 0;
}
