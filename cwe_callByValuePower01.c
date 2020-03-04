#include <stdio.h>

void ptf(char);

int main(){
	printf("Input char : ");
	
	char result = getchar();
	ptf(result);
		
	return 0;
}

void ptf(char result){
	printf("Result : %c \n",result);
}
