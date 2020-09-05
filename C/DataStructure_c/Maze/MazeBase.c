#include <stdio.h>
#include <time.h>
#include <termios.h>
#include <fcntl.h>

struct termios save;

void
tetris_cleanup_io() {
    tcsetattr(fileno(stdin),TCSANOW,&save);
}

void
tetris_set_ioconfig() {
    struct termios custom;
    int fd=fileno(stdin);
    tcgetattr(fd, &save);
    custom=save;
    custom.c_lflag &= ~(ICANON|ECHO);
    tcsetattr(fd,TCSANOW,&custom);
    fcntl(fd, F_SETFL, fcntl(fd, F_GETFL, 0)|O_NONBLOCK);
}

int main() {
    struct timespec tm;

    tm.tv_sec=0;
    tm.tv_nsec=100000000;

    tetris_set_ioconfig();

	int width =12, height = 20;
    int x,y, gameOver=0;

	int block_location = 1;
    char cmd;
    while (gameOver <= 50) {
    	
	nanosleep(&tm, NULL);
	
		// tric
    	for (x=0; x<30; x++)
        	printf("\n");
	    
	    printf("[LEVEL: %d | SCORE: %d]\n", 1, gameOver);
    	printf("~");
	    printf("\n");
	    
    	printf ("!");
   		printf("#");
		printf ("!\n");
    	
        printf("~");
	    printf("\n");

        while ((cmd=getchar())>0) {
            switch (cmd) {
                case 'h':
   		printf("h/n");
                    break;
                case 'l':
   		printf("l/n");
                    break;
            }
        }

		gameOver++;
    }

    printf("*** GAME OVER ***\n");
    
   tetris_cleanup_io();

    return 0;
}
