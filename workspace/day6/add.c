#include<stdio.h>
int add(int x, int y)
{
	return x+y;
}
int sub(int x, int y)
{
	return x-y;
}
/*int mult(int x, int y)
{
	return x*y;
}
float div(int x, int y)
{
	return(x/y);
}
float mod(int x, int y)
{
	return(x%y);
}*/
int main()
{
	printf("Addition of two numbers are:%d\n",add(10,20));
	printf("Subtraction of two numbers are:%d\n",sub(50,20));
	/*printf("Multiplication of two numbers are:%d\n",mult(10,20));
	printf("Division of two numbers are:%f\n",div(100,20));
	printf("Modulus of two numbers are:%f\n",mod(130,20))*/
}




