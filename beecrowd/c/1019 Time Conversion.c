/*

Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample	
556

Output Sample
0:9:16
---------------------------------------------
1

0:0:1
--------------------------------------------
140153

38:55:53

*/
// solutionCode
#include<stdio.h>
main()
{
    int N,n1,n2,n3,q1,q2,q3;
    scanf("%d",&N);
    n1=N/3600;
    q1=N%3600;
    n2=q1/60;
    q2=q1%60;
    printf("%d:%d:%d\n",n1,n2,q2);
    return 0;
}