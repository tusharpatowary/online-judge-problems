#include<stdio.h>
main()
{
    int y,m,D,q1,d;
    scanf("%d",&D);
    y=D/365;
    q1=D%365;
    m=q1/30;
    d=q1%30;
    printf("%d ano(s)\n %d mes(es)\n%d dia(s)",y,m,d);
    return 0;
}
