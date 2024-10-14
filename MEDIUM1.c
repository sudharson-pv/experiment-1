#include<stdio.h>
int main()
{
    int n,c,s;
    printf("Enter the sold newspaper:");
    scanf("%d",&n);
    printf("Enter the selling price:");
    scanf("%d",&s);
    printf("Enter the agent price:");
    scanf("%d",&c);
    int prof=((n*c)-(n*s))-100;
    printf("%d",prof)


}
