#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
	y=x;
	else if(1<x&&x<10)
	{
	y=2*x-1;
 	}
	else
	y=x*3-11;
	printf("%d",y);
	return 0;
}
