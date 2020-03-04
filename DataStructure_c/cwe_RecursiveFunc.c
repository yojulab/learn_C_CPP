#include <stdio.h>

int RecursiveFunc(int number)
{
    int result = 0;

    if(number <= 0){
        printf("Error \n");
    } else if(number == 1) {
        return number;
    } else {
        printf("before The factorial of [%d] is [%d]\n", number, result);
        result  = number * RecursiveFunc(number -1);
        printf("after The factorial of [%d] is [%d]\n", number, result);
        return result;
    }

    return -1;

}

int main(void)
{
   int number ;

   printf("Input Number of elements in array : ");
   scanf("%d", &number);

    int fact  = RecursiveFunc(number);

    if (fact > 0)
        printf("The factorial of [%d] is [%d]\n", number, fact);

     return 0;
}