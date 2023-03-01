#include<stdio.h>
void main()
{
	int l,b,peri,a;
	printf("Enter the length and breadth of rectangle:\n");
	scanf("%d %d",&l,&b);
	peri=2*(l+b);
	a=l*b;
	printf("The perimeter of rectangle is:%d\n",peri);
	printf("The area of rectangle is :%d\n",a);
	
}

