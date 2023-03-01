#include <stdio.h>
void findFact(int, int *);
int main()
{
    int i, fact, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    findFact(n, &fact);
    printf("Factorial of %d is: %d", n,fact);
    return 0;
}
void findFact(int n, int *fact)
{
    int i;
    *fact = 1;
    for (i = 1; i <= n; i++)
    {
        *fact = *fact * i;
    }
}