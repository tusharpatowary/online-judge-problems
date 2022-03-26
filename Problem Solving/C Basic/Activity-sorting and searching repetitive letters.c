#include<stdio.h>
int main()
{
    char w[51];
    scanf("%s",w);
    int i=0,l=0,s,j=0,temp=0;
    while ( w[l] != '\0' )
    l++;

    for(j=0;j<l-1;j++)
    {
        for(i=0;i<l-1;i++)
        {
            if(w[i] > w[i+1])
            {
            s=w[i];
            w[i]=w[i+1];
            w[i+1]=s;
            }
        }
    }

    for(j=0;j<l-1;j++)
    {
        if(w[j] == w[j+1] && w[j-1] != w[j+1])
        {
           temp=temp+1;
        }

    }
    if(0<temp)
    printf("%d",temp);
    else
    printf("0");
    return 0;
}
