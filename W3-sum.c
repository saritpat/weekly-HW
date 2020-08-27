#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long num,c;
    scanf("%lu",&num);
    c = (num*(num + 1))/2;
    if(num >= 0)
    {
       printf("%lu",c);
    }
    else
    {
       printf("Error");
    }
    return 0;
}
