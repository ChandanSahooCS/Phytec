#include<stdio.h>
#include<stdlib.h>
//#define p(x,m) putc(x,m);
int main()
{
        char name[20],ch;
        FILE *fp;
        printf("\n Enter new file name:\n");
        scanf("%[^\n]",name);
        fp=fopen(name,"a");
        if(fp==NULL)
        {
                printf("\nFail to create a file\n");
                exit(1);
        }
        printf("\n File created \n");
        printf("\n Enter the data into File and press\"clte+d\" to end\n");
        while((ch= getchar())!=EOF)
                putc(ch,fp);
	//      p(ch,fp);
	      fclose(fp);

}

	

