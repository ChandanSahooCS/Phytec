#include<stdio.h>
#include<tri.h>
int main()
{
	float p,b,h;
	printf("Enter perpendicular,base,hypotenuse:\n");
	scanf("%f\n%f\n%f",&p,&b,&h);
	printf("sin function is:%.2f",sine(p,h));
	printf("cos function is:%.2f",cosine(b,h));
	printf("tan function is:%.2f",tangent(p,b));
	printf("This is the total answer");
}

