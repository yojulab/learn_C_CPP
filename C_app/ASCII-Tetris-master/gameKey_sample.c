#include <ncurses.h>		// support using window in Text Mode
#include <stdlib.h>		// malloc, free

int main(){
    int x = 10, y = 10;

    initscr();  // Initialize the window
    noecho(); // Don't echo any keypresses(case getch())
    curs_set(FALSE); // Don't display a cursor
    keypad(stdscr, true); //Use special key(KEY_LEFT, KEY_RIGHT Mise)
    cbreak();         // don't interrupt for user input
    timeout(500);     // wait 500ms for key press

    int ch;
    char c='#';
    char *s1 = malloc(sizeof(char)*100);
    int speed = 0;
    while ((ch = getch()) != 'x')
    {
        erase();
        sprintf(s1, "%d", speed++);    // %d를 지정하여 정수를 문자열로 저장
        mvprintw(4, 5, s1);			//int mvprintw(int y, int x, const char *fmt, ...);
        mvprintw(5, 5, "Score : 10");
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
        mvaddch(x,y,c);	//int mvaddch(int y, int x, const chtype ch);
        refresh();	// int refresh(void);

    }
    endwin();// Restore normal terminal behavior
    free(s1);
    return 0;
}
