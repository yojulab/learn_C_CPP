#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// ~$ ./GetProcessId
// PID is 18181, parent process pid is 1
// ...
// ~$ top         # check PID
// ~$ ps -ef | grep GetProcessId
// ~$ sudo kill -9 18181
// # Check Terminal loop
int main()
{
   pid_t pid;

   if ((pid = fork()) == -1)
      perror("fork failed");
   /* 부모 프로세스는 자신과 자식 프로세스의 프로세스 ID 출력 */
   else if (pid != 0)
      /* getpid는 자신의 프로세스 ID를 반환하는 함수 */
      printf("PID is %ld, child process pid is %ld\n", getpid(), pid);
   /* 자식 프로세스는 자신과 부모 프로세스의 프로세스 ID 출력 */
   else
   {
      while (1)
      {
   /* getppid는 부모 프로세스의 프로세스 ID를 반환하는 함수 */
         printf("PID is %ld, parent process pid is %ld\n", getpid(), getppid());
      }
   }
   return 0;
}