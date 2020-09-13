#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num,Sum = 0,i = 0,Multi = 1;
    scanf("%d",&Num);
    printf("%d",Num);
    while(Num > 10)
        {
           while(Num > Multi)
            {
                Multi*=10;
            }
            Multi/=10;
            printf("->");
            while(Num >= 1)
            {
                i = Num/Multi;
                Sum += i;
                Num = Num - i*Multi;
                Multi/=10;
            }
            printf("%d",Sum);
            Num = Sum;
            Sum = 0;
            i = 0;
            Multi = 1;
        }
    return 0;
}
