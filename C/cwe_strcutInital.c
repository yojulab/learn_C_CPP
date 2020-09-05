#include <stdio.h>
#include <string.h>
 
struct member 
{
           int id;
           char name[20];
           float percentage;
};
 
int main() 
{
           struct member sInitial = {1, "Jane", 42.5}; //Initializing

           struct member sInput; //Initializing
 
           sInput.id=2;
           strcpy(sInput.name, "Raju");
           sInput.percentage = 86.5;
 
           printf("Id: %d, Name: %s, Percentage: %f \n", sInitial.id, sInitial.name, sInitial.percentage);
           printf("Id: %d, Name: %s, Percentage: %f \n", sInput.id, sInput.name, sInput.percentage);
           return 0;
}