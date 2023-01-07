/*

Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

Input Samples	
5.0
6.0
7.0

Output Samples
MEDIA = 6.3
---------------------------------------------
5.0
10.0
10.0

MEDIA = 9.0
--------------------------------------------
10.0
10.0
5.0

MEDIA = 7.5


*/
// solutionCode
#include<stdio.h>
main()
{
    float A,B,C,D;
    scanf("%f%f%f",&A,&B,&C);
    D=((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1f\n",D);
    return 0;
}
