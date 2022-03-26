#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter floating number a and b\n");
    scanf("%lf%lf",&a,&b);
    printf("You entered a=%lf and b=%lf\n",a,b);
    c=a*b;
    printf("Multiplication result of a and b is: %.3lf\n",c);
    return 0;
}
