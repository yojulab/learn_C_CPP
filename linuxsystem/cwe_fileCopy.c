// copy file from fileCopy_temp.in to fileCopy_temp.out
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

#define BUFFERSIZE 512
int main()
{
    int bytes, i, infd, outfd;
    char buffer[BUFFERSIZE];
	const char *inFile = "text.in";
	char *outFile = "text.out";

    if((infd = open(inFile, O_RDONLY)) <0){
		perror("Can't open file text.in");
    }
    
    if((outfd = open(outFile, O_CREAT|O_WRONLY, S_IRWXU|S_IRWXG))<0)
    // 인자 3개면 세세한 지정이 가능.
    {
    	printf("Can't open file %s", outFile);
    }

    while((bytes = read (infd, buffer, BUFFERSIZE))>0)
    {
        for(i=0;i<bytes; ++i){
            putchar(buffer[i]);
        }
        write(outfd, buffer, bytes);
    }
    close(infd);
    close(outfd);
      
    return 0;
}