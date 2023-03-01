#include<stdio.h>
extern int result;
extern inline void disp();
int main()
{
	int a=10,b=20;
	printf("Result=%d",result);
	add(a,b);
	printf("Result=%d",result);
	sub(a,b);
	printf("Result=%d",result);
	disp()
}


