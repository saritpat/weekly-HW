#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    double v;
    double PI = 3.1415926535897932384626433;
    scanf("%d",&r);
    v = 4/3.0*PI*r*r*r;
    printf("%0.8f",v);
    return 0;
}
