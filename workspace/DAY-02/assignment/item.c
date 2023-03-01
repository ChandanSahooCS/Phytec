#include<stdio.h>
int main()
{
    float w1,w2,p1,p2,avg;
    printf("Weight of item 1:\n");
    scanf("%f",&w1);
    printf("Weight of item 2:\n");
    scanf("%f",&w2);
    printf("No. of item 1 purchase:\n");
    scanf("%f",&p1);
    printf("No. of item 2 purchase:\n");
    scanf("%f",&p2);
    avg=((w1*p1)+(w2*p2))/(p1+p2);
    printf("Average value is :%f\n",avg);
    return 0;
    }
    