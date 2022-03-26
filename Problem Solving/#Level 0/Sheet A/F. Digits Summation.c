#include<stdio.h>
int main()
{
    long long int a,b;
    int d;
    scanf("%lld%lld",&a,&b);
    if(10<a)
    {
        a=a%10;
    }
    if(10<b)
    {
        b=b%10;
    }
    d=a+b;
    printf("%d",d);
    return 0;
}
