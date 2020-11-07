#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int c, char *v[])
{
  struct stat *buf;

  buf =    malloc(sizeof(*buf));

  if (stat(v[1], buf) == 0)
    {
      printf("buf->st_dev = %d\n", buf->st_dev);
      printf("buf->st_ino = %d\n", buf->st_ino);
      printf("buf->st_mode = %d\n", buf->st_mode);
      printf("buf->st_nlink = %d\n", buf->st_nlink);
      printf("buf->st_uid = %d\n", buf->st_uid);
      printf("buf->st_gid = %d\n", buf->st_gid);
      printf("buf->st_rdev = %d\n", buf->st_rdev);
      printf("buf->st_size = %d\n", buf->st_size);
      printf("buf->st_blksize = %d\n", buf->st_blksize);
      printf("buf->st_blocks = %d\n", buf->st_blocks);
      printf("buf->st_atime = %d\n", buf->st_atime);
      printf("buf->st_mtime = %d\n", buf->st_mtime);
      printf("buf->st_ctime = %d\n", buf->st_ctime);
    }
  return (0);
}