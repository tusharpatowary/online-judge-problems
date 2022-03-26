#include<stdio.h>
int main()
{
    double s,t,t1=0,t2=0,t3=0,S;
    scanf("%lf",&s);
    if(s<=2000)
    printf("Isento\n");
    if(s>2000)
    {

        S=s-2000;
        if(S>1000)
        {
            t1=80;
        }
        else
          t1=(S*8)/100;
    }
    if(s>3000)
    {
        S=s-3000;
        if(S>1500)
        {
            t2=(18*1500)/100;
        }
        else
           t2=(S*18)/100;

    }
    if(s>4500)
    {
        S=s-4500;
        t3=(28*S)/100;
    }
    t=t1+t2+t3;
    if(s>2000)
    printf("R$ %.2lf\n",t);
    return 0;


}
