#include<stdio.h>
int main()
{
    int months,days;
    printf("Enter the day:\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("Months=%d days=%d",months,days);

}