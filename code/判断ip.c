#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d;
    int k;
    char s[100];
    char end[100]={"End of file"};//用于判断是否结束
    while(~(k=scanf("%d.%d.%d.%d",&a,&b,&c,&d)))
    {
        gets(s);
        if(strcmp(s,end)==0) return 0;//判断是否结束
        else if(s[0]!='\0') {printf("N\n");continue;} //有多余的字符串时直接打印N，并进行下一个
        if(k==4 && a>=0 && a<=255 && b>=0 && b<=255 && c>=0 && c<=255 && d>=0 && d<=255)//判断是否符合题意
        printf("Y\n");
        else
            printf("N\n");
        fflush(stdin);//清除缓冲区
    }
    return 0;
}
/*样例输入
1.2.3.4
a.b.c.d
267.43.64.12
12.34.56.bb
210.43.64.129
-123.4.5.6
样例输出
Y
N
N
N
Y
N*/
