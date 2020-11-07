#include <stdio.h>
#include <time.h>

int main() {
    struct timespec tm;

    tm.tv_sec=0;
    tm.tv_nsec=100000000;

	int width =12, height = 20;
    int x,y, gameOver=0;

	int block_location = 1;
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

		gameOver++;
    }

    printf("*** GAME OVER ***\n");
    
    return 0;
}
