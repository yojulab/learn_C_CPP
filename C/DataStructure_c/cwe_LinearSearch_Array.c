#include <stdio.h>
 
long LinearSearch(long [], long, long);
 
int main()
{
   long array[100], search, count, value, looping, startNumber, endNumber, position;
 
   printf("Input Start Number of elements in array : ");
   scanf("%ld", &startNumber);
 
   printf("Input End Number of elements in array : ");
   scanf("%ld", &endNumber);

   printf("Input Start number:  %ld, End number:  %ld\n", startNumber, endNumber);
 
   value = startNumber;
   looping = endNumber - startNumber;
   for (count = 0; count < looping; count++){
      array[count] = value;
      value++;
    }
 
   printf("Input number to search : ");
   scanf("%ld",&search);
 
   position = LinearSearch(array, count, search);
 
   if (position == -1)
      printf("%ld is not present in array.\n", search);
   else
      printf("%ld is present at location %ld.\n", search, position+1);
 
   return 0;
} 
 
long LinearSearch(long array[], long length, long find) {
   long count;
 
   for (count = 0 ;count < length ; count++ ) {
      if (array[count] == find)
         return count;
   }
 
   return -1;
}