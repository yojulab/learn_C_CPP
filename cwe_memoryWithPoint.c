#include <stdio.h>

int main(){
	int number = 10;                // 정수형

   int *pNumber ;

   char sArray[7] = "TYPE !"; 

   char* pArray = "String type.";             // 문자열
   
   void* pVoid;
   
	printf("number Address: %d , Value : '%d'\n", &number, number);
	printf("pNumber Point Address: %d , Point Value : '%d' -> \n", &pNumber, pNumber);
	printf("Real Address: %d , Value : '%d', \n", &*pNumber, *pNumber);
	pNumber = &number;
	printf("change pNumber = &number \n");
	printf("pNumber Point Address: %d , Point Value : '%d' -> \n", &pNumber, pNumber);
	printf("Real Address: %d , Value : '%d', \n", &*pNumber, *pNumber);

	printf("-------------------------------------------------- \n");
	int count ;
	
	for(count=0; count<sizeof(sArray); count++){
	   printf("sArray Address: %d , Value : '%c'\n", &sArray[count], sArray[count]);
	} 

	for(count=0; count < 12; count++){
		printf("pArray Point Address: %d , Point Value : '%d' -> \n", &pArray+count, pArray+count);
		printf("Real Address: %d , Value : '%c', \n", &*(pArray+count), *(pArray+count));
	} 
}
