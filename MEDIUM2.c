#include<stdio.h>
int main()
{
    int a,b,c;
    sacnf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("valid tringle");
    }
    else
    {
         printf("Invalid tringle");
    }

