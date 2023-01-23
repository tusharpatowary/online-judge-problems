/*

Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

Input Sample	
576.73


Output Sample
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
--------------------------------------------------
4.00

NOTAS:
0 nota(s) de R$ 100.00
0 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
2 nota(s) de R$ 2.00
MOEDAS:
0 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
0 moeda(s) de R$ 0.01
----------------------------------------------
91.01

NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01

*/
// solutionCode
#include <stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&n);
    a = n * 100;
    b = a / 10000;
    a = a % 10000;
    c = a / 5000;
    a = a % 5000;
    d = a / 2000;
    a = a % 2000;
    e = a / 1000;
    a = a % 1000;
    f = a / 500;
    a = a % 500;
    g = a / 200;
    a = a % 200;
    h = a / 100;
    a = a % 100;
    i = a / 50;
    a = a % 50;
    j = a / 25;
    a = a % 25;
    k = a / 10;
    a = a % 10;
    l = a / 5;
    a = a % 5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",d);
    printf("%d nota(s) de R$ 10.00\n",e);
    printf("%d nota(s) de R$ 5.00\n",f);
    printf("%d nota(s) de R$ 2.00\n",g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",h);
    printf("%d moeda(s) de R$ 0.50\n",i);
    printf("%d moeda(s) de R$ 0.25\n",j);
    printf("%d moeda(s) de R$ 0.10\n",k);
    printf("%d moeda(s) de R$ 0.05\n",l);
    printf("%d moeda(s) de R$ 0.01\n",a);
    return 0;
}
