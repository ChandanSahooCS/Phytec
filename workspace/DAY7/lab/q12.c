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
        printf("%d is greater\n",a);
    }
    else if(b>c&b>a)
    {
        printf("%d is greater\n",b);
    }
    else
    {
        printf("%d is greater\n",c);
    }
    printf("Rest numbers are small");
}