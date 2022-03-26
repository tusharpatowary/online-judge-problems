#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,n,result1,result2;
    char s1[12],s2[12],t1[12],t2[12];
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%s %s",s2,t2);
        result1 = strcmp(s1,s2);
        result2 = strcmp(t1,t2);

        if(result1==1 && result2==1)
           {
                j++;
           }
        strcpy(s2, s1);
        strcpy(t2, t1);
        i++;
    }
    if(j>0)
        printf("Yes");
    else
        printf("No");
}
