#include <stdio.h>

int main()
{
  float cel, fahr;

  int low = 37, high = 137, step = 10;

  while(low <= high)
  {
    cel = low;
    fahr = cel * (9.0/5.0) + 32;
    printf("%3.0f %6.1f\n", cel, fahr);
    low += step;
  }
}
