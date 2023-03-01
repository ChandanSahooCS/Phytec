#include<stdio.h>

#define A 128

int main()
{
    char arr[A]={'a','b'};
    int i;
    for (i=0;i<=A-1;i++)
    {
        //printf("Enter the value for %d",i+1);
        printf("%c\t",arr[i]);
    }
}