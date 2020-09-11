#include <malloc.h>
#include <stdio.h>

int main(void) {
  struct mallinfo m = mallinfo();
  printf("uordblks = %d\nfordblks = %d\n", m.uordblks, m.fordblks);
  return 0;
}
