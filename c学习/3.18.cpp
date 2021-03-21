#include <stdio.h>
int main ()
{
	int max=-1,min=100,s[100],n;
	double a;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
	scanf("%d",&s[i]);
	}
	for(int i=0;i<n;++i)
	{
	if(max<s[i])
			max=s[i];
	if (min>s[i])
		  min=s[i];	
	 	a+=s[i];}
	printf("%d\n%d\n%.2lf",max,min,a/n);
	
	return 0;
 } 
