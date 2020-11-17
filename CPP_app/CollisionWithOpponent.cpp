#include <curses.h>
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define ERASE_TRACE ' '

#include <string>

int is_move_okay(int y, int x)
{
	using namespace std;
	int campare_ch;
	/* return true if the space is okay to move into */
	campare_ch = mvinch(y, x); // 주어진 위치 문자 return
	// mvprintw(10, 30, campare_ch);
	return ((campare_ch == WALL) || (campare_ch == OPPONENT));
	// return 1;
}

int main(void)
{
	int y, x;
	int ch = 'y';

	/* initialize curses */
	initscr();
	keypad(stdscr, TRUE);
	// curs_set(0);
	cbreak();
	noecho();
	clear();

	/* start player at lower-left */
	y = LINES - 1;
	x = COLS - COLS; //
	while ((ch != 'q') && (ch != 'Q'))
	{
		/* by default, you get a blinking cursor - use it to indicate player */
		// move(3, 4);
		// addch('3');
		// mvaddch(5, 4, '5');
		// mvaddstr(6, 4, "6,4 - &");

		mvaddch(10, 5, WALL);
		mvaddch(11, 5, OPPONENT);
		mvaddch(y, x - 1, ERASE_TRACE); // delete moving right trace
		mvaddch(y, x, PLAYER);
		move(y, x);
		refresh();

		ch = getch();
		/* test inputted key and determine direction */
		switch (ch)
		{
		case KEY_UP:
		case 'w':
			if (is_move_okay(y - 1, x))
			// if ((y > 0) && is_move_okay(y - 1, x))
			{
				// mvaddch(y, x, EMPTY);
				y = y - 1;
			}
			break;
		case KEY_DOWN:
		case 's':
			if ((y < LINES - 1) && is_move_okay(y + 1, x))
			{
				// mvaddch(y, x, EMPTY);
				y = y + 1;
			}
			break;
		case KEY_LEFT:
		case 'a':
			if ((x > 0) && is_move_okay(y, x - 1))
			{
				// mvaddch(y, x, EMPTY);
				x = x - 1;
			}
			break;
		case KEY_RIGHT:
		case 'd':
			if ((x < COLS - 1) && is_move_okay(y, x + 1))
			{
				// mvaddch(y, x, EMPTY);
				x = x + 1;
			}
			break;
		}
	};

	endwin();
	return 0;
}
