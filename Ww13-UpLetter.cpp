#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void Up(char*);


void Up(char* str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

int main()
{
	char str[1000];
	scanf("%[^\n]", str);
	int a = 0;
	while (str[a] != '\0')
	{
		Up(&str[a]);
		printf("%c", str[a]);
		a++;
	}
	return 0;
}
