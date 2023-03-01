#include<stdio.h>
#include<math.h>

int main()
{
	float x1,x2,y1,y2;
	float res;
	printf("Enter x1:");
	scanf("%f",&x1);
	printf("\nEnter y1:");
	scanf("%f",&y1);
	printf("\nEnter x2:");
	scanf("%f",&x2);
	printf("\nEnter y2:");
	scanf("%f",&y2);
	res = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("Distance between the said points is :%.4f \n",sqrt(res));
}


