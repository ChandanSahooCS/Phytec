#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,res;
    printf("Enter the base value:\n");
    scanf("%d", &a);
    printf("Enter the power value:\n");
    scanf("%d", &b);
    res = pow(b,a);
    printf("%d to the power %d is %d", b,a,res);
    return 0;
}