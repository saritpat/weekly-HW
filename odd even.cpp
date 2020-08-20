#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("even");
    }
    else if(num%2 == 1 || num%2 == -1)
    {
        printf("odd");
    }
    else
    {
        printf("Error");
    }
    return 0;
}
