#include<stdio.h>
int main()
{
    double l[3],A,B,C,x,y,z;
    int i=0,j=0,s;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&l[i]);
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(l[j]<l[j+1])
            {
                s=l[j];
                l[j]=l[j+1];
                l[j+1]=s;
            }
        }
    }
    A=l[0];
    B=l[1];
    C=l[2];
    x=(A*A);
    y=(B*B);
    z=(C*C);
    if( A >= (B + C) )
    {
        printf("NAO FORMA TRIANGULO\n");
        if( A == B || A == C || B==C )
            printf("TRIANGULO ISOSCELES\n");
    }
    else if( x == (y + z))
    {
        printf("TRIANGULO RETANGULO\n");
        if( A == B || A == C || B==C )
            printf("TRIANGULO ISOSCELES\n");
    }
    else if( x > (y + z))
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if( A == B || A == C || B==C )
            printf("TRIANGULO ISOSCELES\n");
    }
    else if( x < (y + z))
    {
        printf("TRIANGULO ACUTANGULO\n");
        if( A == B && B == C )
            printf("TRIANGULO EQUILATERO\n");
        else if( A == B || A == C || B==C )
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
