#include<stdio.h>
void swapping(int *x,int *y,int *z);
int main()
{
    int a,b,c;
	printf("Pointer--Swap elements :\n"); 
    printf(" Input the value of 1st element : ");
    scanf("%d",&a);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&b);
	printf(" Input the value of 3rd element : ");
    scanf("%d",&c);
	printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",a,b,c);
    swapping(&a,&b,&c);
    printf("The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",a,b,c);
    return 0;
}
void swapping(int *x,int *y,int *z)
{
   int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
