/*斐波那契数*/
#include <stdio.h>
int main(void)
{
	int n;
	int f1,f2,f3;
	int i;
	f1 = 1;
	f2 = 2;
	printf("请输入需要的值n\n");
	scanf("%d",&n);
	if(n==1)
	{
	f3=1;
	} 
	else if(n==2)
	{
	f3=2;
	}
	else
	{
	 for(i=3;i<=n;i++)
	 {
	f3=f1+f2;
	f1=f2;
	f2=f3;
     }
	}
	printf("%d\n",f3);
	return 0;
}
