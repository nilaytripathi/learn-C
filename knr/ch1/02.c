#include <stdio.h>

int main()
{
  /* Using unknown escape sequences throws
     a warning (gcc 4.6.3
   */
  printf("Let's see the error \c\n");
  return 0;
}
