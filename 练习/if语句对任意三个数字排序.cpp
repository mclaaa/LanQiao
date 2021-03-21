/*
运用if语句进行三个数字的排序  a为最大值 b为中间值 c为最小值 
*/ 
#include <stdio.h> 
int main (void)
{
	int a, b, c, t;
	scanf ("%d%d%d",&a,&b,&c); 
	if (b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	if (c>a)
	{
		t=a;
		a=c;
		c=t;
	}
	if (c>b)
	{
	  t=b;
	  b=c;
	  c=t;
	}
	printf("%d,%d,%d",a,b,c);
	
	return 0;
}

