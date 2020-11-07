#include <ncurses.h>		// support using window in Text Mode

int main(){
    int x = 10, y = 10;
   
    initscr();  // Initialize the window
    noecho(); // Don't echo any keypresses(case getch())
    curs_set(FALSE); // Don't display a cursor
    keypad(stdscr, true); //Use special key(KEY_LEFT, KEY_RIGHT Mise)

    int ch;
    char c='#';
   
    while ((ch = getch()) != 'x')
    {
        erase();
        mvprintw(5, 5, "Score : 10");	//int mvprintw(int y, int x, const char *fmt, ...);
        mvprintw(6, 5, "~~~~~~~~~~");
        mvprintw(7, 5, "!        !");
        switch(ch)
        {
            case KEY_UP:
                x--;
                c='U';
                break;
            case KEY_DOWN:
                x++;
                c='D';
                break;
            case KEY_LEFT:
                y--;
                c='L';
                break;
            case KEY_RIGHT:
                c='R';
                y++;
                break;
            default:
                c = 'D';   
        }
        mvaddch(x,y,c);
        refresh();
       
    }
    endwin();// Restore normal terminal behavior
   
    return 0;
}
