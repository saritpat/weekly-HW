#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num = 2,Sum = 0,Fac = 1,x;
    scanf("%d",&x);
    while(Num >= 1 && Num <= x)
    {
        while(Num > Fac)
        {
            if(Num % Fac == 0)
            {
                Sum += Fac;
                Fac++;
            }
            else if(Num % Fac != 0)
            {
                Fac++;
            }
        }
        if(Num == Sum)
        {
            printf("%d ",Num);
            Sum = 0;
            Fac = 1;
        }
        else
        {
            Sum = 0;
            Fac = 1;
        }
        Num++;
    }
    return 0;
}
