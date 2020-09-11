#include<stdio.h>
 
int main(int argc, char *argv[])
{
   int status;
   char *file_name;
 
	if (argc > 1)
    {
    	file_name = argv[1];
   		status = remove(file_name);
 
   if( status == 0 )
      printf("%s file deleted successfully.\n",file_name);
   else
   {
      printf("Unable to delete the file\n");
      perror("Error");
   }
}
  else
    {
      printf("The command had no other arguments.\n");
    }
 
   return 0;
}


