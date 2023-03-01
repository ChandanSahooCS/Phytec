#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of first:\n");
    scanf("%d",&a);
    printf("enter second value:\n");
    scanf("%d",&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a=%d , b=%d",a,b);
    }
    else
    {
        printf("No Swap");

    }
}
