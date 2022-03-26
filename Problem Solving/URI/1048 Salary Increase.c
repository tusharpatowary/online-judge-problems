#include<stdio.h>
main()
{
    float s,i,e;
    scanf("%f",&s);
    if (0<s & 400.00>=s)
    {
        i=s+((15*s)/100.00);
        e=(i-s);
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",e);
        printf("Em percentual: 15 %\n");

    }
    else if (400.01<=s & 800.00>=s)
    {
        i=s+((12*s)/100.00);
        e=(i-s);
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",e);
        printf("Em percentual: 12 %\n");

    }
     else if (800.01<=s & 1200.00>=s)
    {
        i=s+((10*s)/100.00);
        e=(i-s);
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",e);
        printf("Em percentual: 10 %\n");

    }
     else if (1200.01<=s & 2000.00>=s)
    {
        i=s+((7*s)/100.00);
        e=(i-s);
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",e);
        printf("Em percentual: 7 %\n");

    }
     else if (2000.00<s)
    {
        i=s+((4*s)/100.00);
        e=(i-s);
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",e);
        printf("Em percentual: 4 %\n");

    }
    return 0;
}
