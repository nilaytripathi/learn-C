#include <stdio.h>

/* This program reverses the line for the text segment separated at each
 * newline in it
 */
 
int main()
{
    char input[] = "This is a \n line with newlines \nin it which need to be" \
                   " taken care and \n reverse should happen for \neach line";
    char *iter = input;
    char *start = input;
    char *count = NULL;
    printf("%s", input);
    printf("\n**********\n");
    while(*iter != '\0')
    {
        putchar(*iter);
        if(*iter == '\n')
        {
            count = iter-1;
            while(count >= start)
            {
                putchar(*count);
                count--;
            }
            printf("\n");
            start = iter + 1;
        }
        iter++;
    }
    printf("\n");
    count = iter-1;
    while(count >= start)
    {
        putchar(*count);
        count--;
    }
    printf("\n");
    return 0;
}
