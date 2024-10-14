#include<stdio.h>
int main()
{
    int a,b;
    sacnf("%d%d",&a,&b);
    if(a>=6 &&a<=10)
    {
        b=1*a;
        printf("displying fine value of book %d ",b);
    }
    else if(a>=11 &&a<=20)
    {
        b=5*a;
        printf("displying fine value of book %d ",b);
    }
    else if(a>=21 &&a<=30)
    {
        b=10*a;
        printf("displying fine value of book %d ",b);
    }
    else
    {
        printf("membership will be canclled");
    }
}
