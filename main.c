#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num = 2,Sum = 0,Fac = 1;
    while(Num >= 1 && Num <= 10000)
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
