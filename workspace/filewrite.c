#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30],c;
	FILE *fp;
	printf("Enter the fie name:");
	scanf("%[^\n]",name);
	fp=fopen(name,"w");
	if(fp==NULL)
	{
		printf("File not created");
		exit(1);
	}
	printf("file created successfully");
	printf("\n Enter the data you want to store and press //ctrl+d//to save and exit:\n");
	while((c=getchar()!=EOF))
	{
		fputc(c,fp);
	}
	fclose(fp);
}


