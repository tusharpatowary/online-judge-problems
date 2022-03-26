#include<stdio.h>
int main()
{
    int X,Y;
    float z;
    scanf("%d%d",&X,&Y);
    if(X==1)
    {
        z=(4.00*Y);
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==2)
    {
        z=(4.50*Y);
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==3)
    {
        z=(5.00*Y);
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==4)
    {
        z=(2.00*Y);
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==5)
    {
        z=(1.50*Y);
        printf("Total: R$ %.2f\n",z);
    }
    return 0;
}
