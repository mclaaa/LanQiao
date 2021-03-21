#include <stdio.h> 
int main()
{
	int n,i,s[1000],a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&s[i]);
		if(s[i]>=60)
		a++;
		if(s[i]>=85)
		b++;
	} 
	
	printf("%.0f%%\n",(a*100)/(n*1.0));
	printf("%.0f%%\n",(b*100)/(n*1.0));
	
	return 0;
}
