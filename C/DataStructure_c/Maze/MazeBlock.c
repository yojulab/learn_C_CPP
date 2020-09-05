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

/*  Carve the maze starting at x, y. */
void CarveMaze(char *maze, int width, int height, int x, int y) {

   int x1, y1;
   int x2, y2;
   int dx, dy;
   int dir, count;

   dir = rand() % 4;
   count = 0;
   while(count < 4) {
      dx = 0; dy = 0;
      switch(dir) {
      case 0:  dx = 1;  break;
      case 1:  dy = 1;  break;
      case 2:  dx = -1; break;
      default: dy = -1; break;
      }
      x1 = x + dx;
      y1 = y + dy;
      x2 = x1 + dx;
      y2 = y1 + dy;
      if(   x2 > 0 && x2 < width && y2 > 0 && y2 < height
         && maze[y1 * width + x1] == 1 && maze[y2 * width + x2] == 1) {
         maze[y1 * width + x1] = 0;
         maze[y2 * width + x2] = 0;
         x = x2; y = y2;
         dir = rand() % 4;
         count = 0;
      } else {
         dir = (dir + 1) % 4;
         count += 1;
      }
   }

}

/* Generate maze in matrix maze with size width, height. */
void GenerateMaze(char *maze, int width, int height) {

   int x, y;

   /* Initialize the maze. */
   for(x = 0; x < width * height; x++) {
      maze[x] = 1;
   }
   maze[1 * width + 1] = 0;

   /* Seed the random number generator. */
   srand(time(0));

   /* Carve the maze. */
   for(y = 1; y < height; y += 2) {
      for(x = 1; x < width; x += 2) {
         CarveMaze(maze, width, height, x, y);
      }
   }

   /* Set up the entry and exit. */
   maze[0 * width + 1] = 0;
   maze[(height - 1) * width + (width - 2)] = 0;

}

/* Display the maze. */
void ShowMaze(const char *maze, int width, int height) {
   int x, y;
   for(y = 0; y < height; y++) {
      for(x = 0; x < width; x++) {
         switch(maze[y * width + x]) {
         case 1:  printf("[]");  break;
         case 2:  printf("<>");  break;
         default: printf("  ");  break;
         }
      }
      printf("\n");
   }
}

int main() {
    struct timespec tm;

    tm.tv_sec=0;
    tm.tv_nsec=100000000;

    tetris_set_ioconfig();

	int width =20, height = 20;
    int x,y, gameOver=0;

	int block_location = 1;
    char cmd;
	char *maze;
   /* Allocate the maze array. */
   maze = (char*)malloc(width * height * sizeof(char));

    while (gameOver <= 10) {
    	
		nanosleep(&tm, NULL);
	
		// tric
    	for (x=0; x<30; x++)
        	printf("\n");
	    
	    printf("[LEVEL: %d | SCORE: %d]\n", 1, gameOver);
	    /* Generate and display the maze. */
		GenerateMaze(maze, width, height);
		ShowMaze(maze, width, height);

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

	/* Clean up. */
	free(maze);

    printf("*** GAME OVER ***\n");
    
	tetris_cleanup_io();

    return 0;
}
