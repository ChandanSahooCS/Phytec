#include<stdio.h>
int main()
/*{
    int a,b,*p,*q,sum;
    printf("Enter two integers :\n");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("SUM of the numbers: %d\n",sum);

}*/
{
    int a=10,b=20;
    printf("Addition of two numbers is %d\n",add(&a,&b));
}
int add(int *p,int *q)
{
    return *p+*q;
}