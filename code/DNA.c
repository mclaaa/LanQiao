#include<stdio.h>
int main()
{
    int N,a,b,j,k,i;
    scanf("%d",&N);
 char ch[40];//���ַ�����ȫ����ʼ��Ϊ�ո�����Ҫ��ӡ��һ��ʱ����Ӧ�Ĳ��ָ�ΪX����ӡ��ɣ��ֻ��ؿո�
 for(i=0;i<40;i++)
 ch[i]=' ';
 while(N--)//��ȫ��������ӡ�꣬����ѭ��
 {
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)//ѭ��S1
    {
       for(k=0;k<a-1;k++)//ѭ��S2
       {
         ch[k]=ch[a-k-1]='X';
         for(j=0;j<a;j++)//ѭ��S3
         printf("%c",ch[j]);
         printf("\n");
         ch[k]=ch[a-k-1]=' ';
       }
   }
    ch[0]=ch[a-1]='X';//������ӡʣ����һ��
    for(j=0;j<a;j++)
    printf("%c",ch[j]);
    printf("\n\n");
    ch[0]=ch[a-1]=' ';
   }
    return 0;
}
