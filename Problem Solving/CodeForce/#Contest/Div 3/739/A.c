#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        int c=0,i=1;
        while(c<k)
        {
            if(i%3!=0 && i%10!=3)
            {
                i++;
                c++;
            }
            else
            {
                i++;
            }
        }
        printf("%d\n",i-1);
    }
    return 0;
}
