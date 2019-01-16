/*
 * main.c
 *                        _ _                 
 *         __      ____ _| | | _____   ____ _ 
 *         \ \ /\ / / _` | | |/ _ \ \ / / _` |
 *          \ V  V / (_| | | |  __/\ V / (_| |
 *           \_/\_/ \__,_|_|_|\___| \_/ \__,_|
 * Copyright (C) 2018 walleva <walleva@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <curses.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int x = 0, y = 0;
	WINDOW *win1 = initscr();

	wborder(win1,  0, 0, 0, 0, 0, 0, 0, 0);
	mvwprintw(win1, 6, 6, "Custormer System");
	refresh();
	wrefresh(win1);
	beep();
	sleep(1);
	beep();
	flash();
	getch();
	endwin();
	
return 0;
}

