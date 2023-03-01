#include<stdio.h>
int main()
{
	int x=8,y=10;
	printf("%d==%d is false(%d)\n",x,y,x==y);
	printf("%d!=%d is true(%d)\n",x,y,x!=y);
	printf("%d>%d is false(%d)\n",x,y,x>y);
	printf("%d<%d is true(%d)\n",x,y,x<y);
	printf("%d>=%d is false(%d)\n",x,y,x>=y);
	printf("%d<=%d is true(%d)\n",x,y,x<=y);
}

