#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b, c=1,d;
    scanf("%d",&a);
    scanf("%d",&b);
    while (c <= a && c <= b)
    {
        if (a % c == 0)
        {
            if(b % c == 0)
            {
                d = c;
            }
        }
        c++;
    }
    printf("%d",d);
    return 0;
}
