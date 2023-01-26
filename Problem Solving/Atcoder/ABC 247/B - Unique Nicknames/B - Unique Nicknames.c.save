#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,ans;
    scanf("%d",&n);
    char s[n][11],t[n][11];
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
       scanf("%s%s",&s[i],&t[i]);
    }
     for(i=0;i<n;i++)
     {
     for(j=1;j<n;j++)
    {
       if(strcmp(s[i], s[j])==0 | strcmp(s[i], t[j]) ==0)
        {
          ans=0;
        }
        if(strcmp(t[i], s[j])==0 | strcmp(t[i], t[j]) ==0 )
       {
          ans=0;
       }
    }

     }
    if(ans==0)
        printf("No");
    else
        printf("Yes");

    return 0;
}
