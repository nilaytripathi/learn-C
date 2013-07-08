#include <stdio.h>

#define MAX 10

/* This program to count word lengths and print it
 */
 
int main()
{
    int i = 0, count = 0;
    int size[MAX] = {0,};
    char myStr[] = "This is a test line to see whether we are able to count" \
                    " the number of words in line and print a histogram for it";
    char *iter = myStr;
    while(*iter != '\0')
    {
        count=0;
        while(*iter == ' ')
          iter++;
        while(*iter != ' ')
        {
          iter++;
          count++;
        }
        if(count > MAX)
          size[MAX] += 1;
        else if(count)
          size[count-1] += 1;
        iter++;
    }
    for(i=0; i<MAX; i++)
      printf("Size %2d: %d\n", i+1, size[i]);
    printf("%s", myStr);
    return 0;
}
