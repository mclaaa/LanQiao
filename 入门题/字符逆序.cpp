#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char strinput[100];
    scanf("%[^\n]", strinput); //除了换行符以外的字符全部接收
 
    char stroutput[100];
    int i = 0;
    int j = 0;
    int len = strlen(strinput);
    //逆序拷贝
    for (i = len - 1; i >= 0; i--)
    {
        stroutput[j++] = strinput[i];
    }
 
    printf("%s\n", stroutput);
 
    return 0;
}
