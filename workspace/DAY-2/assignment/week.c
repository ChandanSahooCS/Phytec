#include<stdio.h>
int main()
{
	int d,weeks,years,days;
	printf("Enter no. of d:\n");
	scanf("%d",&d);
	years=d/365;
	weeks=(d%365)/7;
	days=d-((years*365)+(weeks*7));
	printf("Years:%d\n",years);
	printf("Weeks:%d\n",weeks);
	printf("Days:%d\n",days);
	return 0;
}



