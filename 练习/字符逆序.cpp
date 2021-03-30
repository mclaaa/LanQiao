#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char c;
    char output[100];
    int index = 0;
 
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i <= 100)
    {
        output[index++] = c;
        i++;
    }
    //output[index] = '\0';
 
    for (i = index - 1; i >= 0; i--)
    {
        putchar(output[i]);
    }
    //putchar('\n');
 
    return 0;
}

