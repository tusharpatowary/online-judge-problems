#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    int N,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,q;
    N=n*100;
    n1=N/10000;
    q=N%10000;
    n2=q/5000;
    q=q%5000;
    n3=q/2000;
    q=q%2000;
    n4=q/1000;
    q=q%1000;
    n5=q/500;
    q=q%500;
    n6=q/200;
    q=q%200;
    n7=q/100;
    q=q%100;
    n8=q/50;
    q=q%50;
    n9=q/25;
    q=q%25;
    n10=q/10;
    q=q%10;
    n11=q/5;
    q=q%5;
printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d nota(s) de R$ 1.00\n%d nota(s) de R$ 0.50\n%d nota(s) de R$ 0.25\n%d nota(s) de R$ 0.10\n%d nota(s) de R$ 0.05\n%d nota(s) de R$ 0.01\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,q);
return 0;
}
