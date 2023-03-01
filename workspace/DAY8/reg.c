#include<stdio.h>
int main()
{
    register int a,b;
    printf("enter the range:\n");
    scanf("%d",&b);
    for(a=0;a<=b;a++)
    {
        printf("%d\t",a,&a);
    }
}