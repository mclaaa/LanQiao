#include <stdio.h>
int main()
{
long long int n,t,sum;
while(scanf("%lld",&n)!=EOF)
{
sum=0;
while(n!=0)
{

        t=n%10;
        n=n/10;
        sum+=t;
    }
    printf("%lld\n",sum);
}
return 0;
}
/*����ķ���
#include<stdio.h>
#include<string.h>
int main()
{
    int size,sum,i;
    char a[11];
    while(scanf("%s",a)!=EOF)
    {
        sum=0;
        size=strlen(a);                            //�����û���������ĳ����Ƕ���λ��
        for(i=0;i<size;i++)                        //�����ȥ��acsii�Ϳ��Խ��ַ���ת��Ϊ��������
        {
            sum+=a[i]-'0';                         //�������
        }
         printf("%d\n",sum);                       //���
    }
    return 0;
}
*/
