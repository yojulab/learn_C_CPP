
#include <curses.h>
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define ERASE_TRACE ' '

#include <string>

struct Player
{
	// const int y=20, x=20;
	static const int shape_size_y = 2, shape_size_x = 2;
	void appear(const int &move_y, const int &move_x)
	{
		mvaddstr(move_y, move_x, "@@");
		mvaddstr(move_y + this->shape_size_y - 1, move_x, "||");
		// mvaddstr(++y, x,"@@@");
	}
	void appearwithmvprintw(const int &move_y, const int &move_x)
	{
		mvprintw(move_y, move_x, "@@@@");
		mvprintw(move_y + 1, move_x, "||||");
		mvprintw(move_y + 2, move_x, "@@@@");
	}
};

int is_move_okay(int y, int x)
{
	using namespace std;
	int compare_ch;
	/* return true if the space is okay to move into */
	compare_ch = mvinch(y, x); // 주어진 위치 문자 return
	string ch_value = to_string(compare_ch) + ", " + to_string(int(WALL)) + ", " + to_string(int(OPPONENT));
	mvprintw(10, 30, ch_value.c_str());
	mvprintw(11, 30, ch_value.c_str());
	return !((compare_ch == WALL) || (compare_ch == OPPONENT));
	// return 1;
}

int main(void)
{
	using namespace std;
	int y, x;
	int ch = 'y';

	/* initialize curses */
	WINDOW *w;
	w = initscr();
	keypad(stdscr, TRUE);
	curs_set(0);
	// cbreak();
	// noecho();
	// clear();

	/* start player at lower-left */
	y = LINES - 1;
	x = COLS - COLS;
	int move_x = 0, move_y = 0;
	Player player01;
	while ((ch != 'q') && (ch != 'Q'))
	{
		/* by default, you get a blinking cursor - use it to indicate player */
		mvaddch(++move_y, ++move_x, OPPONENT); // auto moving
		mvaddch(10, 5, WALL);
		mvaddch(11, 5, OPPONENT);
		string ch_value = "y, x : " + to_string(y) + ", " + to_string(x) + "LINES, COLS : " + to_string(LINES) + ", " + to_string(COLS);
		mvprintw(15, 30, ch_value.c_str());

		// mvaddch(y, x, PLAYER);
		player01.appear(y, x);
		ch_value = "player01 shape size y, x : " + to_string(player01.shape_size_y) + ", " + to_string(player01.shape_size_x);
		mvprintw(20, 30, ch_value.c_str());
		move(y, x);
		// refresh();

		timeout(30);
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
			if (is_move_okay(y + 1, x))
			// if ((y < LINES - 1) && is_move_okay(y + 1, x))
			{
				// mvaddch(y, x, EMPTY);
				y = y + 1;
			}
			break;
		case KEY_LEFT:
		case 'a':
			// if ((x > 0) && is_move_okay(y, x - 1))
			if (is_move_okay(y, x - 1))
			{
				// mvaddch(y, x, EMPTY);
				x = x - 1;
			}
			break;
		case KEY_RIGHT:
		case 'd':
			// if ((x < COLS - 1) && is_move_okay(y, x + 1))
			if (is_move_okay(y, x + 1))
			{
				// mvaddch(y, x - 1, ERASE_TRACE); // delete moving right trace
				x = x + 1;
			}
			break;
		}
	};

	endwin();
	return 0;
}
