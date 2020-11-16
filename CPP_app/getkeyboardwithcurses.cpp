#include <curses.h>
#include <string>

// int NoWayOut(char *prompt)
int NoWayOut()
{
	int reply = 1;
	savetty(); //save current terminal state
	noecho();
	raw();

	switch (getch())
	{
	case 'y':
	case 'Y':
		reply = 0;
		break;
	case KEY_DOWN:
		reply = 10;
		break;
	case KEY_UP:
		reply = 11;
		break;
	default:
		beep();
		break;
	}
	refresh();
	return reply;
}
int main()
{
	initscr();
	/* main body */
	keypad(stdscr, TRUE);
	noecho();
	cbreak();

	printw("Press any key to exit! ");
	// char *confirm = {"Confirm ?[y/n] "};
	while (NoWayOut())
	{
		mvprintw(10, 10, "Enter Key ");
	}

	endwin();
	// exit(0);
	return 0;
}
