#include <stdio.h>
 struct emp
{
    int emp_no;
    float sal;
    char ename;
}employee;
int main()
{
    employee.emp_no;
    employee.sal;
    printf("%u", sizeof(employee));
}