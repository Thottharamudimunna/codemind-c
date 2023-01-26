#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    c=2*a*b*c*512;
    d=c/1024;
    printf("%d KB",d);
}