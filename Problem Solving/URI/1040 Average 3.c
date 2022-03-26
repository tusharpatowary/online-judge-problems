#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,A,R,A2;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    A=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n",A);
    if(7.0<=A)
    {
       printf("Aluno aprovado.\n");
    }
    if(5.0>A)
    {
       printf("Aluno reprovado.\n");
    }
    if(5.0<=A & 6.9>=A)
    {
       printf("Aluno em exame.\n");
       scanf("%lf",&R);
       printf("Nota do exame: %.1lf\n",R);
       A2=(R+A)/2;
       if(5.00<=A2)
       {
           printf("Aluno aprovado.\n");
           printf("Media final: %.1lf\n",A2);
       }
       else if (4.9>=A2)
       {
           printf("Aluno reprovado.\n");
           printf("Media final: %.1lf\n",A2);
       }
    }
    return 0;
}
