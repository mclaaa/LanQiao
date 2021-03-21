#include <stdio.h>
char s[1000],cnt[26];
int MaxNum;
char maxc;
int main()
{
	gets(s);
	for(char i=0; s[i] != '\0'; ++i)
	{
		cnt[s[i]-'a']++;
		//printf("%d\n",cnt[s[i]-'a']);		
		if(cnt[s[i]-'a'] > MaxNum)
		{			
			MaxNum = cnt[s[i]-'a'];
			maxc = s[i];		}
		else if(cnt[s[i]-'a'] == MaxNum)
		{
			if(s[i] < maxc)
			{
				maxc = s[i];
			}
		}
	}
	printf("%c\n%d\n",maxc,MaxNum);
	return 0;
}
