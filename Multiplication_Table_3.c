#include<stdio.h>
int main()
{
    int n,r,l,i,p;
    scanf("%d%d%d",&n,&r,&l);
    for(i=r;i<=l;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}