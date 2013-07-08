#include <stdio.h>

/* TODO: NOT RESOLVED 
   How to pass EOF from keyoard?
 */

void dump(int a)
{
  printf("Dec: %d Hex: 0x%x ", a, a);
}

int main()
{
  char c;
  printf(" EOF: "); dump(EOF);  printf("\n");
  c= getchar();
  while(c != EOF)
  {
    dump(c);
    putchar(c);
    printf("..\n");
    c= getchar();
  }
  return 0;
}
