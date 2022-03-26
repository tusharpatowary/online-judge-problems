#include<stdio.h>
main()
{
char n[99];
double S,s,t;
scanf("%s %lf %lf",&n,&S,&s);
t=S+((s*15)/100);
printf("TOTAL = R$ %.2lf\n",t);
return 0;
}
