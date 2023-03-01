#include<stdio.h>
int area(int l,int b)
{
    return l*b;
}
int perimeter(int l,int b)
{
    return 2*(l+b);
}
int main()
{
    int l,b,arearec,peri;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    arearec=area(l,b);
    printf("Area of rectangle:%d\n",arearec);
    peri=perimeter(l,b);
    printf("Perimeter of rectangle:%d\n",peri);
}