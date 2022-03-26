#include<stdio.h>
int main()
{
    int h,H,m,M;
    while(scanf("%d%d",&h,&m) != EOF)
    {
        H=h/30; M=m/6;
        if(H<10)
        {
            if (M>=10)
                printf("0%d:%d\n",H,M);
            else if (M<10)
                printf("0%d:0%d\n",H,M);
        }
        else if (H>=10)
        {
            if(M<10)
            printf("%d:0%d\n",H,M);
            else if(M>=10)
            printf("%d:%d\n",H,M);
        }
    }
    return 0;
}
