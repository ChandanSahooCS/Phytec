#include<stdio.h>
int display(static float );
int main()
{
    int a=12.6;
    display(a);
}
int display(static float)
{
    printf("%d",a);
}