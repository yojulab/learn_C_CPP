// #include <sys/types.h>
#include <sys/stat.h>
#include <iostream>

// ~$ ./cwe_stat ReadDir.c
// buf.st_dev = 16777221
// buf.st_ino = 2676174
// buf.st_mode = 33188
// buf.st_nlink = 1
// ...
int main(int argc, char *argv[])
{
    using namespace std;
    struct stat statbuf;

    if (stat(argv[1], &statbuf) == 0)
    {
        cout << "stat.st_dev : " << statbuf.st_dev << endl;
        cout << "stat.st_ino : " << statbuf.st_ino << endl;
        cout << "stat.st_mode : " << statbuf.st_mode << endl;
        cout << "stat.st_nlink : " << statbuf.st_nlink << endl;
        cout << "stat.st_uid : " << statbuf.st_uid << endl;
        cout << "stat.st_gid : " << statbuf.st_gid << endl;
        cout << "stat.st_rdev : " << statbuf.st_rdev << endl;
        cout << "stat.st_size : " << statbuf.st_size << endl;
        cout << "stat.st_blksize : " << statbuf.st_blksize << endl;
        cout << "stat.st_blocks : " << statbuf.st_blocks << endl;
        cout << "stat.st_atime : " << statbuf.st_atime << endl;
        cout << "stat.st_mtime : " << statbuf.st_mtime << endl;
        cout << "stat.st_ctime : " << statbuf.st_ctime << endl;
    }
    else
        cout << "can't to get information\n"
             << endl;
    return (0);
}