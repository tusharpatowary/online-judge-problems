#include<stdio.h>
int main()
{
     long long int a,b,c,d;
     int A,B,C,D,x;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    A=a%100;
    B=b%100;
    C=c%100;
    D=d%100;
    x=(A*B*C*D)%100;
    if(x<10)
        printf("0%d",x);
    else
        printf("%d",x);
    return 0;
}
