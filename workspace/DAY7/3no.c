#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of first:\n");
    scanf("%d",&a);
    printf("enter second value:\n");
    scanf("%d",&b);
    printf("enter value of third:\n");
    scanf("%d",&c);
    if (a>b&a>c)
    {
        printf("a is greater");
    }
    else if(b>c&b>a)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");

    }
}