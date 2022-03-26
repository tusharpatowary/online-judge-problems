#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    if(s == 43)
    {
        if(a + b == c)
            printf("Yes");
        else
            printf("%d",a+b);
    }
    else if (s==45)
    {
        if(a - b == c)
            printf("Yes");
        else
            printf("%d",a-b);
    }
    else if (s==42)
    {
         if(a * b == c)
            printf("Yes");
        else
            printf("%d",a*b);
    }
    return 0;
}
