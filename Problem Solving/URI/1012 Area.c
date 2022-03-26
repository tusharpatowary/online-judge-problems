#include<stdio.h>
main()
{
    double A,B,C,a1,a2,a3,a4,a5,pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    a1=(A*C)/2;
    a2=pi*C*C;
    a3=((A+B)*C)/2;
    a4=B*B;
    a5=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf",a1,a2,a3,a4,a5);
    return 0;
}
