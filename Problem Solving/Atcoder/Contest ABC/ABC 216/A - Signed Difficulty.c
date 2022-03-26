#include<stdio.h>
int main()
{
    char dot;
    int x,y;
    scanf("%d%c%d",&x,&dot,&y);
    if(y>= 0 && y<=2)
        printf("%d-",x);
    else if (y>= 3 && y<=6)
        printf("%d",x);
    else
        printf("%d+",x);
    return 0;

}
