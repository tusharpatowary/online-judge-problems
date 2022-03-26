#include <stdio.h>
#include <math.h>
int main() {
    long long A,B,C,D,x,y;
    scanf("%lld%lld%lld%lld",&A,&B,&C,&D);

    x = pow(A,B);
    y = pow(C,D);

    if(x>y)
        printf("YES");
    else
        printf("NO");

    return 0;
}
