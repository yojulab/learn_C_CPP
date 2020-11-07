#include <termios.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>

main()
{
  int fd, status;

   fd = open("/dev/ttyS0", O_RDONLY);
   if (ioctl(fd, TIOCMGET, &status) == -1)
      printf("TIOCMGET failed: %s\n",
             strerror(errno));
   else {
      if (status & TIOCM_DTR)
         puts("TIOCM_DTR is not set");
      else
         puts("TIOCM_DTR is set");
   }
   close(fd);
}