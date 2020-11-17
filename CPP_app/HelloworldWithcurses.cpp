#include <curses.h>
int main()
{
	WINDOW *w;
	w = initscr();
	curs_set(0);

    /* start main body */
    printw("Hello Ncurse!");
    // refresh();
    /* end main body */

    getch();
    endwin();
    // exit(0);
    return 0;
}