#include <stdio.h>

long filesize(FILE *stream);

int main(void)
{
   FILE *stream;
          char c;          int i=0;
   stream = fopen("text.in", "r");
    while(feof(stream)==0)
    {
        fseek(stream,i,0);
        i+=100;
        c=getc(stream);
        printf("%c  ",c);
    }
    printf("\n");
   fclose(stream);
   return 0;
}