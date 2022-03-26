#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,H,M;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    H=h2-h1;
    if(H<0)
    {
         H=24+H;
    }
    M=m2-m1;
    if(M<0)
    {
        M=60+M;
        H--;
    }
    if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(h1==h2 && m1>m2)
    {
        H=23;
        M=60-(m1-m2);

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }


    return 0;
}
