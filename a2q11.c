#include<stdio.h>
int main()
{
    int x,t;
    printf("enter a number");
    scanf("%d",&x);
    printf("enter a digit");
    scanf("%d",&t);
    x=x*10;
    x=x+t;
    printf("%d",x);
}


