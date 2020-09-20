#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,P,Q;
    scanf("%d",&N);
    P = 1;
    Q = N-1;
    while(P <= N)
    {
        for(int t = 0;t < P;t++)
        {
            printf("*");
        }
        for(int s = 1;s <= 2*Q-1;s++)
        {
            printf(" ");
        }
        if(P != N)
        {
           for(int t = 0;t < P;t++)
            {
                printf("*");
            }
        }
        else
        {
            for(int t = 1;t < P;t++)
            {
                printf("*");
            }
        }
        printf("\n");
        P++;
        Q--;
    }
    P = N+1;
    Q = 1;
    while(P > 2)
    {
        for(int t = 0;t <= P-3;t++)
        {
            printf("*");
        }
        for(int s = 1;s <= 2*Q-1;s++)
        {
            printf(" ");
        }
        for(int t = 0;t <= P-3;t++)
        {
            printf("*");
        }
        printf("\n");
        P--;
        Q++;
    }
    return 0;
}
