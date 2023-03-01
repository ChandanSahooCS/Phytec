#include<stdio.h>
#include<string.h>
#define MAX 2
struct dept
{
    char dept[10];
}d;
struct employee
{
    int empid;
    float empsal;
    char empname[10];
    struct dept d;
}emp;
int main()
{
    //struct employee emp[MAX]={{1,50000,"Chandan"}};
    strcpy(emp.d.dept,"electronic");
    printf("%s",emp.d.dept,"electronic");
    /*printf("%d\n",emp1.empid);
    printf("%f\n",emp1.empsal);
    printf("%s\n",emp1.empname);*/
}