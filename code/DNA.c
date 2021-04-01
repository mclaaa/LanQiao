#include<stdio.h>
int main()
{
    int N,a,b,j,k,i;
    scanf("%d",&N);
 char ch[40];//将字符数组全部初始化为空格，在需要打印哪一行时将对应的部分改为X，打印完成，又换回空格
 for(i=0;i<40;i++)
 ch[i]=' ';
 while(N--)//当全部组数打印完，跳出循环
 {
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)//循环S1
    {
       for(k=0;k<a-1;k++)//循环S2
       {
         ch[k]=ch[a-k-1]='X';
         for(j=0;j<a;j++)//循环S3
         printf("%c",ch[j]);
         printf("\n");
         ch[k]=ch[a-k-1]=' ';
       }
   }
    ch[0]=ch[a-1]='X';//单独打印剩的那一行
    for(j=0;j<a;j++)
    printf("%c",ch[j]);
    printf("\n\n");
    ch[0]=ch[a-1]=' ';
   }
    return 0;
}
