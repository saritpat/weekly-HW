#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void Up(char*);
void Down(char*);


void Up(char* str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

void Down(char* str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str += 32;
	}
}

int main()
{
	char str[1000];
	int ai = 0;
	scanf("%[^\n]", str);
	for (int a = 0; str[a] != '\0'; a++)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			Up(&str[a]);
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			Down(&str[a]);
		}
		printf("%c", str[a]);
	}

	return 0;
}