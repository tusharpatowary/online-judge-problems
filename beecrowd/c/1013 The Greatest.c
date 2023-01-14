/*

Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	
7 14 106

Output Samples
106 eh o maior
-----------------------------------------
217 14 6

217 eh o maior

*/
// solutionCode
#include<stdio.h>
int main ()
{
    int a,b,c,g1,g2;
    scanf("%d%d%d",&a,&b,&c);
    g1=((a+b+abs(a-b)))/2;
    g2=(g1+c+abs(g1-c))/2;
    printf("%d eh o maior\n",g2);
    return 0;
}