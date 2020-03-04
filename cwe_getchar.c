#include <stdio.h>

// #define EOF -1
#define IN 1
#define OUT 0

int main(){
	int getCharactor, lineNumber, wordNumber, charNumber, state ;
	
	state = OUT;
	
	lineNumber = wordNumber = charNumber = 0;
	
	while((getCharactor = getchar()) != EOF){
		++charNumber;
		if(getCharactor == '\n')
			++lineNumber;
		if(getCharactor == ' ' || getCharactor == '\n' || getCharactor == '\t')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++wordNumber;
		}
	}
	
	printf("lineNumber : %d, wordNumber : %d, charNumber : %d \n", lineNumber, wordNumber, charNumber);
	
	return 0;
}