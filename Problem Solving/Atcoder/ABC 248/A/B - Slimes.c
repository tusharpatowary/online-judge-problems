#include<stdio.h>
int main()
{
    int b,k,count=0;
    long long int a;
    scanf("%lld%d%d",&a,&b,&k);

    while(a<b)
    {
        a=a*k;
        count=count+1;
    }
    printf("%d",count);
    return 0;

}
