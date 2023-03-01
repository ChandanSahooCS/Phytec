#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    a++;
    printf("%d\n", a);
    printf("%d\n", p);
    *p++;
    printf("%d\n", p);
}