#include<stdio.h>
int main()
{
    int n,i=0,l,L=0;
    char w[15];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",w);
        l=1;
        while(w[l] != '\0')
        {
            l++;

        }
        if(l>L)
        {
           L=l;
        }
    }
    printf("%d",L);


    return 0;
}
