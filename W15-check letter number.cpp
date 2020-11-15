#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void checkLetter(char, int*, int*,int*);

int main() 
{
		char str[10000];
		int a = 0;
		int up = 0, low = 0, num = 0;
		scanf("%[^\n]", &str);
		while (str[a] != '\0')
		{
			checkLetter(str[a], &up, &low, &num);
			a++;
		}
		printf("Upper letter = %d\nLower letter = %d\nNumber = %d", up, low,num);
}

	void checkLetter(char str, int* up, int* low,int*num) 
	{
		if (str >= 'A' && str <= 'Z')
		{
			++* up;
		}
		else if (str >= 'a' && str <= 'z')
		{
			++* low;
		}
		else if (str >= '0' && str <= '9')
		{
			++* num;
		}
	}
