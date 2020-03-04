#include <stdio.h>

int main () {
   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;

   printf("Address of var variable: %d\n", &var  );
   printf("Address stored in ip variable: %d\n", ip );
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
