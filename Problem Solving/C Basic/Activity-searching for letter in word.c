#include<stdio.h>
int main(void)
{
    char w[51];
    int l,i=0,p;
    scanf("%s",w);
    l=0;
    while(w[l] != 0)
    l++;
    while(w[i] != '\0' && w[i] != 't' && w[i] != 'T' )
    i++;
    p=l/2;
    if(l%2==0 && l != i)
    {
        if(i<=p)
        printf("1");
        else printf("2");
    }
    else if(l%2==1 && l != i )
    {
         if(i<=(p+1))
        printf("1");
        else printf("2");
    }
    else printf("-1");

    return 0;

}
