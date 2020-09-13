#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int b,a;
    a = 2;
    scanf("%d",&b);
    while (a <= b)
    {
        if (b%a == 0)
        {
            printf("%d",a);
            b /= a;
            if (b > 1)
            {
                printf("x");
            }
            a = 1;
        }
        a++;
    }
    return 0;
}
