#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,P;
    scanf("%d",&N);
    P = 1;
    while(P <= N)
    {
        for(int s = 1;s <= (N-P);s++)
        {
            printf(" ");
        }
        for(int t = 1;t <= 2*P-1;t++)
        {
            printf("*");
        }
        printf("\n");
        P++;
    }
    P = N-1;
    while(P >= 1)
    {
        for(int s = 1;s <= (N-P);s++)
        {
            printf(" ");
        }
        for(int t = 1;t <= 2*P-1;t++)
        {
            printf("*");
        }
        printf("\n");
        P--;
    }
    return 0;
}
