#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1,Num2,i=1,LCM;
    scanf("%d",&Num1);
    scanf("%d",&Num2);
    if(Num1 % Num2 != 0 && Num2 % Num1 != 0)
    {
        LCM = Num1 * Num2;
        printf("%d",LCM);
    }
    else
    {
        while(i <= Num1 || i <= Num2)
        {
            if(i % Num1 == 0 && i % Num2 == 0)
            {
                LCM = i;
            }
            i++;
        }
    printf("%d",LCM);
    }
    return 0;
}
