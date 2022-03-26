#include<stdio.h>
#include<math.h>
main()
{
    int N,n1,n2,n3,n4,n5,n6,n7,q1,q2,q3,q4,q5,q6,q7;
    scanf("%d",&N);
    n1=N/100;
    q1=N%100;
    n2=q1/50;
    q2=q1%50;
    n3=q2/20;
    q3=q2%20;
    n4=q3/10;
    q4=q3%10;
    n5=q4/5;
    q5=q4%5;
    n6=q5/2;
    q6=q5%2;
    n7=q6/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00",N,n1,n2,n3,n4,n5,n6,n7);
    return 0;
}
