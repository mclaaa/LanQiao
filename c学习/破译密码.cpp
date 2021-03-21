
/*在Dev-c++里运行结果
China
Glmre
*/
#include<stdio.h>
#include <string.h>

char s[1000],a[1000];
int main()
{
	int i = 0,n;
	gets(s);
	n=strlen(s);
	for(i=0; i<n; i++)
	{
		if((s[i] <= 'z' && s[i] >= 'w') || (s[i] <= 'Z' && s[i] >= 'W'))
		{
			a[i] = s[i] - 22;
		}
		else
		{
			a[i] = s[i]+4;
		}
		printf("%c",a[i]);
	}
	
	return 0;

}


