#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char strinput[100];
    scanf("%[^\n]", strinput); //���˻��з�������ַ�ȫ������
 
    char stroutput[100];
    int i = 0;
    int j = 0;
    int len = strlen(strinput);
    //���򿽱�
    for (i = len - 1; i >= 0; i--)
    {
        stroutput[j++] = strinput[i];
    }
 
    printf("%s\n", stroutput);
 
    return 0;
}
