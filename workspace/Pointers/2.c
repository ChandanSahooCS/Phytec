#include <stdio.h>
int add(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int main()
{
    int a=40,b=20;
    printf("Addition of two numbers is %d\n", add(&a, &b));
    printf("Subtraction of two numbers is %d\n", sub(&a, &b));
    printf("Multiplication of two numbers is %d\n", mul(&a, &b));
    printf("Division of two numbers is %d\n", div(&a, &b));
    return 0;

}
int add(int *p, int *q)
{
    return *p + *q;
}
int sub(int *p, int *q)
{
    return *p - *q;
}
int mul(int *p, int *q)
{
    return *p * *q;
}
int div(int *p, int *q)
{
    return *p / *q;
}
   