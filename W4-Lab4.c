#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void draw_ship()
{

    printf("<-0-> ");
}

void erase_ship()
{
    system("cls");
}
void gotoxy(int x,int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE) , c);
}

int main()
{
    char ch = ' ';
    int x = 38,y = 20;
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if(ch == 'a')
            {
                erase_ship();
                gotoxy(x,y);
                draw_ship(--x,y);
            }
            else if(ch == 'd')
            {
                erase_ship();
                gotoxy(x,y);
                draw_ship(++x,y);
            }
            else if(ch == 'w')
            {
                erase_ship();
                gotoxy(x,y);
                draw_ship(x,--y);
            }
            else if(ch == 's')
            {
                erase_ship();
                gotoxy(x,y);
                draw_ship(x,++y);
            }
            fflush(stdin);
        }
    }
    while(ch != 'x');
    return 0;
}
