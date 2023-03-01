#include<stdio.h>
int swap(int *p,int *q)
{
    *p=*p + *q;
    *q= *p - *q;
    *p= *p - *q;
    return *p,*q;
}
int main()
{
    int a,b;
    printf("Enter the values : \n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapping : %d and %d\n",a,b);
    return 0;
}