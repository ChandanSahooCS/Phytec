#include<stdio.h>
int main()
/*{
        int a,b,i,j,c,d;
        printf("enter the value of first:\n");
        scanf("%d",&a);
	printf("Enter the second value:\n");
	scanf("%d",&b);
        printf("binary form of a given number a:\n");
        for(int i=7;i>=0;i--)
        {
                j=(a>>i) & 0x1;
		printf("%d",j);
	}
	printf("\nbinary form of a given number b:\n");
        for(int i=7;i>=0;i--)
        {
                j=(b>>i) & 0x1;
                printf("%d",j);
        }
	printf("\n%d",c=a&b);
	printf("\n%d",d=a|b);
	printf("\nbinary form of a OR number :\n");
        for(int i=7;i>=0;i--)
        {
                j=(c>>i) & 0x1;
                printf("%d",j);
        }
	printf("\nbinary form of a AND number :\n");
        for(int i=7;i>=0;i--)
        {
                j=(d>>i) & 0x1;
                printf("%d",j);
        }
	printf("\n");
}*/
/*{
	int a,i,count=0,j;
	printf("Enter the value of the number:\n");
	scanf("%d",&a);
	printf("\nBinary form of given number:");
	for(int i=7;i>=0;i--)
	{
		j=(a>>i) & 0x1;
		printf("%d",j);
		if(j==1)
		{
			count++;
		}
	}
		printf("\nNumber of one's :%d\n",count);
	}*/

/*{
	int x,y;
	printf("enter the value of x:\n");
	scanf("%d",&x);
	printf("enter the value of y:\n");
        scanf("%d",&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("After swap:\n x=%d\n y=%d\n",x,y);
}*/
{
	int a=3;
	printf("value=%d\n",~a);
	return 0;
}





	




