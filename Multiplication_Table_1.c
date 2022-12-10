#include<stdio.h>
int main()
{
    int a,i,d;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        d=a*i;
        printf("%d x %d = %d
",a,i,d);
    }
}