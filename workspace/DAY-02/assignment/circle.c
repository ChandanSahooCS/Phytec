#include<stdio.h>
void main()
{
	int r;
	float peri,a;
        printf("Enter the radius of circle:\n");
        scanf("%d",&r);
        peri=2*3.14*r;
        a=3.14*r*r;
        printf("The perimeter of circle is:%f\n",peri);
        printf("The area of circle is :%f\n",a);

}

