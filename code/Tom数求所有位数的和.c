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
/*数组的方法
#include<stdio.h>
#include<string.h>
int main()
{
    int size,sum,i;
    char a[11];
    while(scanf("%s",a)!=EOF)
    {
        sum=0;
        size=strlen(a);                            //可那用户输入的数的长度是多少位的
        for(i=0;i<size;i++)                        //用其减去其acsii就可以将字符数转换为真正的数
        {
            sum+=a[i]-'0';                         //依次相加
        }
         printf("%d\n",sum);                       //输出
    }
    return 0;
}
*/
