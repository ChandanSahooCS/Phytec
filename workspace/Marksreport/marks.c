#include<stdio.h>
#include"report.h"
int main()
{  
        int p,c,m,e;
        printf("Marks for Physics Chemistry Maths and English are:\n");
        scanf("%d %d %d %d",&p,&m,&c,&e);
        printf(" grade in PHYSICS\n", phy(p));
        printf(" grade in CHEMISTRY\n", chem(c));
        printf(" grade in MATH\n", math(m));
        printf(" grade in ENGLISH\n", eng(e));
        printf("\n");
        printf("GRADE SYSTEM\n");
        printf("\n");
        printf("grade\tmark\nO\t91-100\nE\t81-90\nA\t71-80\nB\t61-70\nC\t51-60\nD\t34-50\nFAIL\t0-33");
       return 0;
}
