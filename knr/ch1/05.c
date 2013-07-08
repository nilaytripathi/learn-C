#include <stdio.h>

int main()
{
  int fahr;
  for(fahr=100; fahr >= 0; fahr-=10)
    printf("%3d %6.1f\n", fahr, (fahr-32)*(5.0/9.0));
}
