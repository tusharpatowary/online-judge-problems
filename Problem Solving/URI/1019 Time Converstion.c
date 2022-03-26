#include<stdio.h>
main()
{
    int N,n1,n2,n3,q1,q2,q3;
    scanf("%d",&N);
    n1=N/3600;
    q1=N%3600;
    n2=q1/60;
    q2=q1%60;
    printf("%d:%d:%d\n",n1,n2,q2);
    return 0;
}
