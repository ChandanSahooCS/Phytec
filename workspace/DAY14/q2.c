#include <stdio.h>
#include<string.h>
int main() 
{
    char s[50];
    int i;
    printf("enter the word:\n");
    gets(s);
    for (i = 0; s[i]!= '\0'; ++i);
    printf("Length of the string: %d", i);
    return 0;
}
