#include <curses.h>
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define ERASE_TRACE ' '

int main(void)
{
	/* initialize curses */
	WINDOW *w;
	w = initscr();
	keypad(stdscr, TRUE);
	curs_set(0);
	// cbreak();
	// noecho();
	// clear();
	timeout(30); // control game speed

	/* start player at lower-left */
	int y, x;
	int ch = 'y'; // define integer type with charactor

	y = LINES - 1;
	x = COLS - COLS; //
	int move_x = 0, move_y = 0;
	while ((ch != 'q') && (ch != 'Q'))
	{
		/* by default, you get a blinking cursor - use it to indicate player */
		// move(3, 4);
		// addch('3');
		// mvaddch(5, 4, '5');
		// mvaddstr(6, 4, "6,4 - &");

		mvaddch(++move_y, ++move_x, OPPONENT); // auto moving
		mvaddch(y, x, PLAYER);
		mvaddch(10, 5, WALL);
		mvaddch(11, 5, OPPONENT);
		// refresh();

		ch = getch();
		/* test inputted key and determine direction */
		switch (ch)
		{
		case KEY_UP:
		case 'w':
			y = y - 1;
			break;
		case KEY_DOWN:
		case 's':
			y = y + 1;
			break;
		case KEY_LEFT:
		case 'a':
			x = x - 1;
			break;
		case KEY_RIGHT:
		case 'd':
			mvaddch(y, x, ERASE_TRACE); // delete moving right trace
			x = x + 1;
			break;
		}
	};

	endwin();
	return 0;
}
