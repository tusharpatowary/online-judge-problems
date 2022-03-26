#include<stdio.h>
int main()
{
    float A,B,C,R1,R2;
    scanf("%f%f%f",&A,&B,&C);
    if (0<(B*B-4*A*C)& 0<A)
    {
     R1=(-B+sqrt(B*B-4*A*C))/(2*A);
     R2=(-B-sqrt(B*B-4*A*C))/(2*A);
     printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
