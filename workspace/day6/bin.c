#include<stdio.h>
int main()
{
	int a,i,j;
	printf("enter the value:\n");
	scanf("%d",&a);
	printf("binary form of a given number a:\n");
        for(int i=7;i>=0;i--)
	/*{
		j=(a>>i) & 0x1;
		if(i==3 && j==1)
		{
			printf("status of third bit:%d\n",j);
			printf("\nON\n");
		}
		else if(i==3 && j==0)
		{
			printf("OFF\n");

		
	}
	return 0;
}*/
{
	j=(a>>i) & 0x01;
	printf("%d",j);


}
}

