#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no.of elements to store:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    int *p;
    p=&arr[0];
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(p+i));
    }
}
