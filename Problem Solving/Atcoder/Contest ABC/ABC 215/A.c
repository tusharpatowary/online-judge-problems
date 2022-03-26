#include <stdio.h>
#include<string.h>
int main()
{
   char S1[]="Hello,World!";
   char S2[15];
   int value;
   scanf("%s",S2);
   value=strcmp(S1,S2);
   if(value==0)
   printf("AC");
   else
   printf("WA");
   return 0;
}
