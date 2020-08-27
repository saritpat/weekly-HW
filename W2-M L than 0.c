#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a > 0)
    {
        printf("More than zero");
    }
    else if(a == 0)
    {
        printf("Equal zero");
    }
    else if(a < 0)
    {
        printf("Less than zero");
    }
    else
    {
        printf("Error");
    }
    return 0;
}
