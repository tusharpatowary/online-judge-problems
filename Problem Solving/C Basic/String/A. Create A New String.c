#include<stdio.h>
int main(void)
{
    int s=1,t=1;
    char S[1000],T[1000];
    scanf("%s",S);
    scanf("%s",T);
    while(S[s]!= '\0')
    {
        s++;
    }
    while(T[t]!= '\0')
    {
        t++;
    }
    printf("%d %d\n%s %s",s,t,S,T);
    return 0;
}
