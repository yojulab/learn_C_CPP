#include <stdio.h>

void ptf(int, int, int);
int power(int, int);

int main(){
	int cnt = 5;
	int targetNumber01, targetNumber02 ;
	int result;
	
	printf("count number : %d \n",cnt);
	
	targetNumber01 = 2;
	targetNumber02 = -3;

	printf("target number01 : %d, number02 : %d  \n",targetNumber01, targetNumber02);

	for(int count=0; count<cnt; count++)
		ptf(count, power(targetNumber01,count), power(targetNumber02, count));
		
	return 0;
}

void ptf(int first, int second, int third){
	printf("pft function : %d %d %d\n", first, second, third);
}

int power(int base, int count){
	int i, p;
	
	p = 1;
	for(i=1; i<=count; i++)
		p = p * base;
		
	return p;
}