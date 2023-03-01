/*#include <stdio.h>
int a = 10;
int main()
{
    static int a = 20;
    printf("%d", a);
    {
        static int a = 30;
        printf("%d", a);
    }
    {
        static int a = 40;
        printf("%d", a);
    }

    printf("%d", a);
}*/
#include <stdio.h>
int a=1;
int main()
{
    static int a = 1;
    {
        static int a=2;
        {
            static int a=3;
            {
                printf("%d",a);
            }
        }printf("%d",a);
        printf("%d",a);
    }
}

   