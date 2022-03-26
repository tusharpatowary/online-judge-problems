#include<stdio.h>
int main()
{
    int p,q,x,i=0;
    double y=0;
    scanf("%d",&p);
    if(p<=5)
    {
        for(i=0;i<p;i++)
        {
            scanf("%d%d",&x,&q);
            if(q<=500)
            {
                if(x==1001)
                    y=y+(1.5*q);
                if(x==1002)
                    y=y+(2.5*q);
                if(x==1003)
                    y=y+(3.5*q);
                if(x==1004)
                    y=y+(4.5*q);
                if(x==1005)
                    y=y+(5.5*q);
            }
        }
        printf("%.2lf\n",y);
    }
    return 0;

}
