#include<stdio.h>
int main()
{
    unsigned long long int a,b,x,i=0;

    scanf("%llu%llu%llu",&a,&b,&x);

    for(a;a<=b;a++)
    {
        if(a%x==0)
            i++;
    }
    printf("%llu",i);
    return 0;
}
