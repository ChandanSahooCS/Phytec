#include<stdio.h>

int main()
{
	int a=7,b;
	b=a;
	printf("b=%d\n",b);
	b+=a;
	printf("b=%d\n",b);
	b*=a;
	printf("b=%d\n",b);
	b%=a;
	printf("b=%d\n",b);
}

