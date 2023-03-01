#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[20],ch;
	FILE *fp;
	printf("\n Enter new file name:\n");
	scanf("%[^\n]",name);
	fp=fopen(name,"w+");
	if(fp==NULL)
	{
		printf("\nFail to create a file\n");
		exit(1);
	}
	printf("\n File created \n");
	printf("\n Enter the data into File and press\"clte+d\" to end\n");
	while((ch= getchar())!=EOF)
		putc(ch,fp);
	fseek(fp,0,SEEK_SET);

	printf("\n\n Data in File\n");
	while((ch= getc(fp))!=EOF)
		putchar(ch);
	fclose(fp);
}

