#include <stdio.h>         // puts()
#include <string.h>        // strlen() memset()
#include <fcntl.h>         // O_WRONLY
#include <unistd.h>        // write(), close()

#define  BUFF_SIZE   1024

int main()
{
   int   fd;
   char  buff[BUFF_SIZE];
   off_t sz_file;

   fd = open( "./text.in", O_RDONLY);

   memset( buff, '\0', BUFF_SIZE);
   lseek( fd, 40, SEEK_SET);              // 파일의 시작에서 40번을 건너 띈다.
   read( fd, buff, BUFF_SIZE);
   puts( buff);

   memset( buff, '\0', BUFF_SIZE);
   lseek( fd,  50, SEEK_SET);              // 파일의 시작에서 50번을 건너 띈다.
   lseek( fd,  50, SEEK_CUR);              // 현재 위치에서 다시 50번을 건너 띈다.
   read( fd, buff, BUFF_SIZE);
   puts( buff);

   memset( buff, '\0', BUFF_SIZE);
   lseek( fd,  -50, SEEK_END);             // 파일의 끝에서 앞으로 50번을 건너 띈다.
   read( fd, buff, BUFF_SIZE);
   puts( buff);

   sz_file  = lseek( fd,  0, SEEK_END);      // 파일의 끝 위치를 반환
   printf( "file size = %d\n", (int)sz_file);

   close( fd);

   return 0;
}

