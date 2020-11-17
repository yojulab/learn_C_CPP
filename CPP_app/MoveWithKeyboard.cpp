#include <curses.h>
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define ERASE_TRACE ' '

int main(void)
{
	int y, x;
	int ch = 'y';

	/* initialize curses */
	initscr();
	keypad(stdscr, TRUE);
	curs_set(0);
	// cbreak();
	// noecho();
	// clear();

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

		mvaddch(y, x - 1, ERASE_TRACE); // delete moving right trace
		mvaddch(y, x, PLAYER);
		mvaddch(10, 5, WALL);
		mvaddch(11, 5, OPPONENT);
		refresh();

		ch = getch();
		/* test inputted key and determine direction */
		switch (ch)
		{
		case KEY_UP:
		case 'w':
			// if ((y > 0) && is_move_okay(y - 1, x))
			// {
			// mvaddch(y, x, EMPTY);
			y = y - 1;
			// }
			break;
		case KEY_DOWN:
		case 's':
			// if ((y < LINES - 1) && is_move_okay(y + 1, x))
			// {
			// mvaddch(y, x, EMPTY);
			y = y + 1;
			// }
			break;
		case KEY_LEFT:
		case 'a':
			// if ((x > 0) && is_move_okay(y, x - 1))
			// {
			// mvaddch(y, x, EMPTY);
			x = x - 1;
			// }
			break;
		case KEY_RIGHT:
		case 'd':
			// if ((x < COLS - 1) && is_move_okay(y, x + 1))
			// {
			// mvaddch(y, x, EMPTY);
			x = x + 1;
			// }
			break;
		}
	};

	endwin();
	return 0;
}
