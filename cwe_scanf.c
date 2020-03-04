#include <stdio.h>

int main(){
	double sum, v = 1.1 ;
	
	sum = 0 ;
	while(v > 1){
		printf("Input Double : "); 
		scanf(" %lf", &v);
		printf("Scanf \t%.2f\n", sum += v);
	}
	return 0;
}
