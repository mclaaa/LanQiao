#include <stdio.h>
#include <math.h>
char s;
int sum=0;
int G,n; 
int main()
{

for(int i;getchar()!='\n';i++)
n=i;
scanf("%d\n",&s);
printf("%d\n",n);
printf("%d\n",s);
	sum=sum+s;
	G=(sum/n)*100;
	printf("%d%%\n",G); 
	return 0;
}
