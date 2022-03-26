#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>=65 && a<=90 )
    {
        printf("%d is a Alphabet\n",a);
    }
    else
        printf("%d is not a Alphabet\n",a);

    return 0;
}
