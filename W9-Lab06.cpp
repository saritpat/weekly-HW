#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>

char cursor(int x, int y) 
{
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2]; COORD c = { x,y }; DWORD num_read;
	if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))
	{
		return '\0';
	}
	else
	{
		return buf[0];
	}
}

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y)
{
	gotoxy(x, y); 
	printf(" <-0-> ");
}

void draw_bullet(int x, int y)
{
	gotoxy(x, y); 
	printf("^");
}

void clear_bullet(int x, int y)
{
	gotoxy(x, y); 
	printf(" ");
}

void draw_star(int x, int y)
{
	gotoxy(x,y);
	printf("*");
}

void randomStar() 
{
	int i, j;
	do 
	{
		i = 10 + (rand() % (70 - 10));
		j = 2 + (rand() % (5 - 2));
	} while (cursor(i, j) == '*');
	gotoxy(i, j);
	printf("*");
}

int main()
{
	char ch = '.';
	int x = 38, y = 20;
	int bx, by;
	int sc = 0;
	int s;
	int bullet = 0;
	srand(time(NULL));
	for (int star = 0; star < 20; star++) 
	{
		randomStar();
	}
	draw_ship(x, y);
	do 
	{
		gotoxy(0, 0);
		printf("score : %d", sc);
		if (_kbhit()) 
		{
			ch = _getch();
			if (ch == 'a') 
			{ 
				draw_ship(--x, y); 
			}
			if (ch == 's')
			{ 
				draw_ship(++x, y); 
			}
			if (bullet != 1 && ch == ' ') 
			{ 
				bullet = 1; 
				bx = x + 3; 
				by = y - 1; 
			}
			fflush(stdin);
		}
		if (bullet == 1) 
		{
			clear_bullet(bx, by);
			if (by == 2) 
			{ 
				clear_bullet(bx, by);
				bullet = 0; 
			}
			if (by > 0)
			{
				if (cursor(bx, by - 1) != '*')
				{
					draw_bullet(bx, --by);
				}
				else 
				{
					gotoxy(bx, by - 1);
					printf(" ");
					bullet = 0;
					Beep(700, 200);
					randomStar();
					sc++;
				}
			}
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}
