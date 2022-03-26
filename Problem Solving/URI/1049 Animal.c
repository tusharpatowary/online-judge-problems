#include<stdio.h>
int main()
{
    char w1[15],w2[15],w3[15];
    scanf("%s%s%s",w1,w2,w3);
    if(w1[0]=='v' && w2[0]=='a' && w3[0]=='c' ) printf("aguia\n");
    if(w1[0]=='v' && w2[0]=='a' && w3[0]=='o' ) printf("pomba\n");
    if(w1[0]=='v' && w2[0]=='m' && w3[0]=='o' ) printf("homem\n");
    if(w1[0]=='v' && w2[0]=='m' && w3[0]=='h' ) printf("vaca\n");
    if(w1[0]=='i' && w2[0]=='i' && w3[2]=='m' ) printf("pulga\n");
    if(w1[0]=='i' && w2[0]=='i' && w3[2]=='r' ) printf("lagarta\n");
    if(w1[0]=='i' && w2[0]=='a' && w3[0]=='h' ) printf("sanguessuga\n");
    if(w1[0]=='i' && w2[0]=='a' && w3[0]=='o' ) printf("minhoca\n");
    return 0;

}
