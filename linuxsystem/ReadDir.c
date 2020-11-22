#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

// ~$ ReadDir /home/sanghun/Document
// .
// ..
// temp
// .DS_Store
// .localized
int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *entry;
 
 	if ((dir = opendir(argv[1])) == NULL) { 
 		fprintf(stderr, "can't open '%s'\n", argv[1]);	
 		exit(1); 
 	}
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }
    closedir(dir);
    return 0;
}