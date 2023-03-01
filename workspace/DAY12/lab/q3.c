#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,*p=&a,*q=&b;
    printf("Pointer : Find the maximum number between two numbers :\n");
    printf(" Input the first number : ");
    scanf("%d", p);
    printf(" Input the second number : ");
    scanf("%d", q);
    if(*p > *q)
    {
        printf("%d is the maximum number.\n",*p);
    }
    else
    {
        printf("%d is the maximum number.\n",*q);
    }
}