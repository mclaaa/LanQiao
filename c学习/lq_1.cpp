//
//#include <stdio.h>
// int main()
// {
// 	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
// 	int m,d;
// 	scanf("%d\n%d",&m,&d);
// 	if(m=a[12]&&d=a[12])
// 	{printf("yes");
//	 }
//	 else
//	 {printf("no");
//	 }
// 	
// }


//sdfdfd
#include <stdio.h>
char s[1000], cnt[26]; //s[] 存放单词， cnt[]表示26单词中个英文字母出现的次数
int MaxNum; // 最大次数
char MaxC; //最大次数的字母
int main(){
  gets(s);
  for(char i = 0; s[i] != '\0'; ++i){
    cnt[s[i]-'a']++; //每次循环所查看的字母次数加一
    
    printf("%d\n", cnt[s[i]-'a']);
    
    if(cnt[s[i]-'a'] > MaxNum){ // 查找当前循环出现最大的字母次数
      MaxNum = cnt[s[i]-'a'];
      MaxC = s[i];
    }
    else if(cnt[s[i]-'a'] == MaxNum){ // 若相等，取字典顺序小的
      if(s[i] < MaxC){
        MaxC = s[i];
      }
    }
  }
  printf("%c\n%d", MaxC, MaxNum);
  return 0;
}
