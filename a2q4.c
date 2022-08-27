#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
}


