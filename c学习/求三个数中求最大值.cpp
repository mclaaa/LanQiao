#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	max=a;
	else if(c>a||b>a)
	 {
	 if(c>b)
	 max=c;
	 else
	 max=b;
	 }
	printf("%d",max); 
	return 0;
}
