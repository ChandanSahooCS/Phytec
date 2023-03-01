#include <stdio.h>
int (*func)(int ,int );
int (*func1)(int ,int );
int add(int , int);
int sub(int ,int );
/*int mul(int *,int *);
int div(int *,int *);*/
int main()
{
    int result,result1;
    func=&add;
    func1=&sub;
    result=(*func)(10,20);
    result1=(*func1)(10,20);
    printf("Value of addition is %d\n",result);
    printf("Value of subtraction is %d\n",result1);
}

int add(int p, int q)
{
    return p + q;
}
int sub(int p, int q)
{
    return p - q;
}
/*int mul(int p, int q)
{
    return p * q;
}
int div(int p, int q)
{
    return p / q;
}*/
   