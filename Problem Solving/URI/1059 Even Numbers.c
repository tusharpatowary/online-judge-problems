#include<stdio.h>
main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        i=i+1;
        if (i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
