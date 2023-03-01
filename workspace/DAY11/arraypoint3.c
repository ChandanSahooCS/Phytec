#include <stdio.h>
int main()
/*{
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    p=&a;
    for (i = 0; i <= 10; i++)
    {
        printf("value of a %d from %p\n", a[i], &a[i]);
    }
    printf("%X\n", (p + 2));
    printf("%X\n", (p + 4));
    printf("%X\n", ((p + 4) - (p + 2)));
    printf("%X\n", *(p + 2));
}*/
{
int a[10]={1,2,3,4,5,6,7,8,9,10},*p,i;

p=&a;
for(int i=0;i<10;i++)
{
    printf("Value of array before change: %d  \n",a[i]);
}
printf("%x\n",(p));
printf("%x\n",(p+1));
printf("%x\n",(p+2));
printf("%x\n",(p+3));
printf("%x\n",(p+4));
printf("%x\n",(p+5));
printf("%x\n",(p+4)-(p+2));
printf("%x\n",*(p+2));

    
}
