#include<stdio.h>
#include<windows.h>
#include<conio.h>

void setcolor(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y)
{
	
	gotoxy(x, y);
	setcolor(2, 4);
	printf("<-0->");
}

void draw_bullet(int xb, int yb)
{
	gotoxy(xb, yb);
	setcolor(2, 0);
	printf("|");
}

void erase_ship(int x, int y)
{
	gotoxy(x, y);
	setcolor(2, 0);
	printf("     ");
}

void erase_bullet(int xb, int yb)
{
	gotoxy(xb, yb);
	setcolor(2, 0);
	printf("   ");
}

void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}

int main()
{
	int x = 38, y = 20,r = 0,B = 0,BC = 0;
	int bullet[5] = { 0 };
	int i = 0;
	int xb[5], yb[5];
	int a = 0;
	setcursor(0);
	draw_ship(x,y);
	char ch = ' ';
	do 
	{
		if (_kbhit()) 
		{
			ch = _getch();
			if (ch == 'a')//left
			{ 
				r = 1;
			}
			if (ch == 'd')//right
			{
				r = 2;

			}
			if (ch == 's')//stop
			{
				r = 0;
			}
			if (ch == ' ' && BC < 5)//fire
			{
				BC++;
				bullet[i % 5] = 1;
				xb[i % 5] = x + 2;
				yb[i % 5] = y - 1;
				i++;
			}
		}
		if (x > 0 && r == 1)//left
		{
			erase_ship(x, y);
			draw_ship(--x, y);
		}
		if (x < 80 && r == 2)//right
		{
			erase_ship(x, y);
			draw_ship(++x, y);
		}
		if (x > 0 && x < 80 && r == 0)//stop
		{
			draw_ship(x, y);
		}
		for (int a = 0; a < 5; a++)
		{
			if (bullet[a] == 1)
			{
				erase_bullet(xb[a], yb[a]);
				if (yb[a] == 0)
				{
					bullet[a] = 0;
					BC--;
				}
				if (yb[a] > 0)
				{
					draw_bullet(xb[a], --(yb[a]));
				}
			}
		}
		fflush(stdin);
		Sleep(100);
	}while(ch != 'x');
	return 0;
}