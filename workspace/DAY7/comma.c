#include<stdio.h>
int main()
{
    int a=20,b=10,c;
    a=(b=10,c=30,20);
    printf("%d",a);
}