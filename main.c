#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main()
{
	char strx[50];
	char* p;
	scanf("%s",strx,49);
	p = strx;
	while(*p != '\0')
	{
		if(*p >= '0' && *p <= '9')
		{
			printf("%c", *p);
		}
		p = p + 1;
	}
	return 0;
}
