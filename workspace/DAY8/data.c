#include<stdio.h>
int greeting();
int greeting()
{
    printf("Hello World");
}
int main()
{
    char b;
    b=greeting();
    printf("%c",b);
}