#include<stdio.h>
int main()
{
    float x;
    int a;
    scanf("%f",&x);
    a=x;
    if(x-a>0)
        printf("float %d %.3f",a,x-a);
    else if(x-a==0)
        printf("int %d",a);
    return 0;
}
