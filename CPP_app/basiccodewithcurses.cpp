/* triangle.c */

#include <curses.h>
#include <stdlib.h>

int main(void)
{
	int maxlines, maxcols;

	/* initialize curses */
	initscr();
	cbreak();
	echo();

	// clear();

    // getmaxyx(stdscr, winSize.y, winSize.x);
	/* initialize triangle */
	maxlines = LINES - 1;
	maxcols = COLS - 1;

	// mvaddstr(0, 0, "max lines : "+maxlines);
    // mvprintw(4, 10, "▄█ █▄");

	mvaddstr(maxlines, 0, "Press any key to quit"+maxlines);

	refresh();

	getch();
	endwin();

	exit(0);
}