#include <stdio.h>

int main(){
	int number = 10;                // 정수형

   float real_num = 10.02;           // 실수형

   double bigsize_real = 10312.312414;  // 큰 실수형

   char* pString = "String type.";             // 문자열
   
   char String[7] = "TYPE !"; 
   
   char ch01 = 'C';
   char ch02 = 'C';
   char ch03 = 'C';
   
   int *pNumber ;
   int *pTemp ;
   
   printf("Address: int    : %d\n", &number);
   printf("Address: float  : %d\n", &real_num);
   printf("Address: double : %d\n", &bigsize_real);
   printf("Address: &pString: %d\n", &pString);
   printf("Address: str+1  : %d, str+2  : %d, , str+3  : %d\n", &*(pString+1), &*(pString+2), &*(pString+3));
   
   printf("Address: String: %d, String : %s\n", &String[0], String);
	pString = &String;
   printf("Address: String: %d, String : %s\n", &pString, *pString);
   printf("Address: str+1  : %d, str+2  : %d\n", &*(pString+1), &*(pString+2));

   printf("Address: char01 : %d\n", &ch01);
   printf("Address: char02 : %d\n", &ch02);
   printf("Address: char03 : %d\n", &ch03);
   printf("Address: P int  : %d, pNumber : %d\n", &pNumber, pNumber);
//    *pNumber = &number;
//    printf("Address: P int  : %d, pNumber : %d\n", &pNumber, pNumber);
   pNumber = &number;
   printf("Address: P int  : %d, pNumber : %d, *pNumber : %d, &*pNumber : %d\n", &pNumber, pNumber, *pNumber, &*pNumber);
//    *pTemp = number;
//    printf("Address: P Temp  : %d, pTemp : %d, *pTemp : %d\n", &pTemp, pTemp, *pTemp);
}
