#include<stdio.h>
int main()
{
    int a,b,res;
    printf("enter value of first:\n");
    scanf("%d",&a);
    printf("enter sceond:\n");
    scanf("%d",&b);
    res=a%b;
    if(res==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    }