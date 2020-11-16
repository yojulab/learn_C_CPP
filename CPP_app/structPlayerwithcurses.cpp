#include <curses.h>
#include <stdlib.h>

#define GRASS ' '
#define EMPTY '.'
#define WATER '~'
#define MOUNTAIN '^'
#define PLAYER '*'

int is_move_okay(int y, int x);

struct Player
{
	int x=20, y=20;
	void appear(int &x, int &y)
	{
		mvaddstr(y, x, 	"@@@@");
		mvaddstr(++y, x,"||||");
		mvaddstr(++y, x,"@@@@");
	}
};

int main(void)
{
	int y, x;
	int ch;
	struct Player player;
	
	/* initialize curses */

	initscr();
	keypad(stdscr, TRUE);
	curs_set(0);
	cbreak();
	noecho();

	clear();

	/* initialize the quest map */

	/* start player at lower-left */

	y = LINES - 1;
	x = 0;

	do
	{
		/* by default, you get a blinking cursor - use it to indicate player */

		// mvaddch(y, x, PLAYER);
		// move(y, x);
		// refresh();

		player.appear(y, x);
		ch = getch();

		/* test inputted key and determine direction */

		switch (ch)
		{
		case KEY_UP:
		case 'w':
		case 'W':
			// if ((y > 0) && is_move_okay(y - 1, x))
			// {
			// mvaddch(y, x, EMPTY);
			y = y - 1;
			// }
			break;
		case KEY_DOWN:
		case 's':
		case 'S':
			// if ((y < LINES - 1) && is_move_okay(y + 1, x))
			// {
			// mvaddch(y, x, EMPTY);
			y = y + 1;
			// }
			break;
		case KEY_LEFT:
		case 'a':
		case 'A':
			// if ((x > 0) && is_move_okay(y, x - 1))
			// {
			// mvaddch(y, x, EMPTY);
			x = x - 1;
			// }
			break;
		case KEY_RIGHT:
		case 'd':
		case 'D':
			// if ((x < COLS - 1) && is_move_okay(y, x + 1))
			// {
			// mvaddch(y, x, EMPTY);
			x = x + 1;
			// }
			break;
		}
	} while ((ch != 'q') && (ch != 'Q'));

	endwin();

	exit(0);
}

int is_move_okay(int y, int x)
{
	int testch;

	/* return true if the space is okay to move into */

	testch = mvinch(y, x);
	return ((testch == GRASS) || (testch == EMPTY));
}
