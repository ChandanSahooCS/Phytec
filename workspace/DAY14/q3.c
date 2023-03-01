#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i;
    printf("Enter the string:\n");
    gets(s);
    printf("The characters of the strings are:\n");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c ",s[i]);
    }
}