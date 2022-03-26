#include<stdio.h>
#include<string.h>
int main()
{
    char s1[4],s2[4],s3[4];
    int c1=0,c2=0,c3=0,c4=0;
     scanf("%s %s %s", s1,s2,s3);
   if(strcmp(s1,"ABC")==0){
        c1=1;
    }else if(strcmp(s1,"ARC")==0){
        c2=1;
    }else if(strcmp(s1,"AGC")==0){
        c3=1;
    }else if(strcmp(s1,"AHC")==0){
        c4=1;
    }
    if(strcmp(s2,"ABC")==0){
        c1=1;
    }else if(strcmp(s2,"ARC")==0){
        c2=1;
    }else if(strcmp(s2,"AGC")==0){
        c3=1;
    }else if(strcmp(s2,"AHC")==0){
        c4=1;
    }
    if(strcmp(s3,"ABC")==0){
        c1=1;
    }else if(strcmp(s3,"ARC")==0){
        c2=1;
    }else if(strcmp(s3,"AGC")==0){
        c3=1;
    }else if(strcmp(s3,"AHC")==0){
        c4=1;
    }
    if(c1==0) printf("ABC\n");
    if(c2==0) printf("ARC\n");
    if(c3==0) printf("AGC\n");
    if(c4==0) printf("AHC\n");


    return 0;
}
