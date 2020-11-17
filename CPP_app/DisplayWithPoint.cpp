#include <curses.h>
// #include <string>
int main()
{
    initscr();
    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);

    /* main body */
    //Set default init mode
    // noecho();
    // raw();

    printw("Start Hello Ncurse!");

    move(3, 4);
    addch('3');
    mvaddch(5, 4, '5');
    mvaddstr(6, 4, "6,4 - &");

    // attron(COLOR_PAIR(COLOR_RED));
    mvprintw(max_y / 2, max_x / 2, "Middle Hello Ncurse!");
    mvprintw(max_y - 1, 0, "End Hello Ncurse!");

    mvaddch(max_y-1, max_x-1, 'E');
    // draw outline
    // for (int row = 0; row < LINES - 1; ++row)
    // {
    //     for (int col = 0; col = COLS - 1; ++col)
    //     {
    //         mvaddch(row, col, '*');
    //     }
    // }

    refresh();
    getch();
    endwin();
    // exit(0);
    return 0;
}