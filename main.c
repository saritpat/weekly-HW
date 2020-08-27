#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a,b = 0,seed;
    scanf("%d",&a);
    if(a == 1)// 1 line
    {
        printf("*");
    }
    else if(a == 2)//2 line
    {
        printf("**\n**");
    }
    else
    {
        for(b = 0 ;b < a;b++)//first line
        {
            printf("*");
        }
        printf("\n");
        for(b = 0;b < a - 2;b++)//middle line
        {
            printf("* ");
            for(seed = 0;seed <= a - 4;seed++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for(b = 0;b < a;b++)//last line
        {
            printf("*");
        }
    }
    return 0;
}
