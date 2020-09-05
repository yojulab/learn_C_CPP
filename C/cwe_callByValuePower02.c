#include <stdio.h>

void ptf(int);
int power(int, int);

int main(){
	int count = 5;
	int targetNumber ;
	int result;
	
	printf("count number : %d \n",count);
	targetNumber = 2;
	printf("target number : %d \n",targetNumber);
	result = power(targetNumber,count);
	ptf(result);

	targetNumber = -3;
	printf("target number : %d \n",targetNumber);
	result = power(targetNumber,count);
	ptf(result);
		
	return 0;
}

void ptf(int result){
	printf("Result : %d \n",result);
}

int power(int base, int count){
	int i, p;
	
	p = 1;
	for(i=1; i<=count; i++)
		p = p * base;
		
	return p;
}