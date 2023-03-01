#include<stdio.h>
int main()
{
    int a=10;
    float f=18.6;
    char v='r';
    void *p;
    {
        p=&a;
        printf("Value of a is %d\n",*(int *)p);
    }
    void *p1;
    {
         p1=&f;
        printf("Value of a is %f\n",*(float *)p1);
    }
    void *p3;
    {
         p3=&v;
        printf("Value of a is %c\n",*(char *)p3);
    }
}