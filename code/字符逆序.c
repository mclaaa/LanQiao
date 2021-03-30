#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    char output[100];
    int index=0;
    int i =0;
    while((a=getchar())!=EOF && i<=100 && a!='\n' && i<100)
    {
        output[index++]=a;
        i++;
    }
    for(i=index-1;i>=0;i--)

    {
            putchar(output[i]);
    }


    return 0;
}
