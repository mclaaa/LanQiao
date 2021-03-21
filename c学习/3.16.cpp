#include <stdio.h>
char s[1000],aa[26];
int maxc;
char num;
int main()
{
	gets(s);
	for(char i=0;s[i]!='\0';++i)	
  {
	aa[s[i]-'a']++; 
	//printf("%d\n",aa[s[i]-'a']);
	if(aa[s[i]-'a']>maxc)
	{
		maxc=aa[s[i]-'a'];
		num=s[i];
	}
	else if(aa[s[i]-'a']==maxc)
	{
		if(s[i]<num)
		{
			num=s[i];
		}
	}
}
	
	printf("%d\n%c\n",maxc,num);
	
	return 0;
}
