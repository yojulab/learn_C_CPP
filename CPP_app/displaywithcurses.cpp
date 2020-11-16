#include <curses.h>
// #include <string>
int main()
{
    initscr();
    /* main body */
    printw("Start Hello Ncurse!");

    //Set default init mode
    noecho();
    raw();

    move(3,4);
    addch('3');

    mvaddch(5,4,'5');

    mvaddstr(6,4,"6,4 - &");

    int y, x;
    getmaxyx(stdscr, y, x);

    // attron(COLOR_PAIR(COLOR_RED));
    mvprintw(y/2, x/2, "Middle Hello Ncurse!");
    
    mvprintw(y-1, 0, "End Hello Ncurse!");
    refresh();
    getch();
    endwin();
    // exit(0);
    return 0;
}