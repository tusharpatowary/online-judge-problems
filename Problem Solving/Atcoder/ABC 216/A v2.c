#include<stdio.h>
int main(void)
{
	int x,y;
	scanf("%d65%d",&x,&y);
	//printf("%d\n",x+y);
	if(y<=2) printf("%d-\n",x);
	else if(y<=6) printf("%d\n",x);
	else printf("%d+\n",x);
	return 0;

}
