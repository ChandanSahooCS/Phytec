#include <stdio.h>
#include <math.h>

void main()
{
   int a,b,c,d;
   float x1,x2;
 
   printf("Input the value of a,b & c : \n");
   scanf("%d %d %d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d<0)
   {
    printf("Both roots are imaginary");
   }
   if(d==0)
   {
    printf("Both roots are equal");
    x1=b/2*a;
    printf("Roots is %f",x1);
   }
   if(d>0)
   {
    printf("Roots are real and distinct");
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("\nRoots are :%f,%f\n",x1,x2);

   }
}