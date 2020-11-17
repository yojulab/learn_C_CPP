#include <curses.h>
int main()
{
    initscr();
    /* main body */
    printw("Hello Ncurse!");
    refresh();
    getch();
    endwin();
    // exit(0);
    return 0;
}