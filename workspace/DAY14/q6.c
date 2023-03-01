#include <stdio.h>
#include <string.h>
int main()
{
  	char a[100], b[100];
  	int n,p, i;
    printf("\n Please Enter the First String :  ");
  	gets(a);
  	printf("\n Please Enter the Second String :  ");
  	gets(b);
  	for (i = 0; a[i] != '\0'; i++)
    {
        n++;
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        p++;
    }
    if(n==p)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Not equal");
    }
}