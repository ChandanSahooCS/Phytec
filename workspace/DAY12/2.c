#include <stdio.h>
int main()
{
    int a;
    printf("%d", &a);
    int *c=&a;
    if ((*c) % sizeof(a) == 0)
    {
    printf("\nALIGHNMENT");
    }
    else
    {
        printf("\nunalighnment");
    }
}