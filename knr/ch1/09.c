#include <stdio.h>

/* This program to remove extra spaces from a line
 */

int main()
{
    char input[] = "This is the   test    line    without a   newline";
    char *iter = NULL;
    printf("Display: %s\n", input);
    iter = input;
    while(*iter != '\0')
    {
        if(*iter == ' ')
        {
            printf("%c", *iter);
            while(*iter == ' ')
            {
                iter++;
            }
            printf("%c", *iter);
        }
        else
          printf("%c", *iter);
      iter++;
    }
    return 0;
}
