#include<stdio.h>
int main()
{
    int sh,sm,eh,em,h,m,m1;
    scanf("%d%d%d%d",&sh,&sm,&eh,&em);

        if(eh>sh && em >sm)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh-sh,em-sm);
    else if(eh>sh && em==sm)
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",eh-sh);

    else if(eh>sh && em<sm)
    {
        h=eh-sh-1;
        m=(60-sm)+em;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(eh<sh && em<sm)
    {
        h=(24-sh)+eh-1;
        m=(60-sm)+em;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(eh<sh && em==sm)
    {
        h=(24-sh)+eh;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",h);
    }
    else if(eh<sh && em>sm)
    {
        h=(24-sh)+eh;
        m=(60-sm)+em;
        m1=m%60;
        m=m/60;
        h=h+m-1;
        m=m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(eh==sh && em==sm)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (eh==sh && sm>em)
    {
        h=23;
        m=60+(em-sm);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if (eh==sh && sm<em)
    {
        h=0;
        m=(em-sm);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    return 0;
}
