#include <curses.h>
#include <string>
int main()
{
    using namespace std;
    WINDOW *w;
    w = initscr();
    curs_set(0);

    int max_y, max_x;
    max_y = LINES - 1;
    max_x = COLS - 1; //

    /* main body */
    //Set default init mode
    // noecho();
    // raw();

    printw("Start Hello Ncurse!");

    move(3, 4);
    addch('3');
    mvaddch(5, 4, '5');
    string str_var = "max_y, max_x : " + to_string(int(LINES)) + ", " + to_string(int(COLS));
    mvaddstr(6, 4, str_var.c_str());

    // attron(COLOR_PAIR(COLOR_RED));
    mvprintw(max_y / 2, max_x / 2, "Middle Hello Ncurse!");
    mvprintw(max_y - 1, 0, "End Hello Ncurse!");

    mvaddch(max_y - 1, max_x - 1, 'E');
    // draw outline
    // for (int row = 0; row < LINES - 1; ++row)
    // {
    //     for (int col = 0; col = COLS - 1; ++col)
    //     {
    //         mvaddch(row, col, '*');
    //     }
    // }

    // refresh();
    getch();
    endwin();
    // exit(0);
    return 0;
}