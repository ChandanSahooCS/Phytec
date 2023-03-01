#include<stdio.h>
int main()
{
    int nd,y,m,d;
    printf("Enter no. of days:\n");
    scanf("%d",&nd);
    y=nd/365;
    nd=nd-(365*y);
    m=(nd%365)/30;
    d=nd-(m*30);
    printf("%d year\n%d Months\n%d Days",y,m,d);


}