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
char s[1000], cnt[26]; //s[] ��ŵ��ʣ� cnt[]��ʾ26�����и�Ӣ����ĸ���ֵĴ���
int MaxNum; // ������
char MaxC; //����������ĸ
int main(){
  gets(s);
  for(char i = 0; s[i] != '\0'; ++i){
    cnt[s[i]-'a']++; //ÿ��ѭ�����鿴����ĸ������һ
    
    printf("%d\n", cnt[s[i]-'a']);
    
    if(cnt[s[i]-'a'] > MaxNum){ // ���ҵ�ǰѭ������������ĸ����
      MaxNum = cnt[s[i]-'a'];
      MaxC = s[i];
    }
    else if(cnt[s[i]-'a'] == MaxNum){ // ����ȣ�ȡ�ֵ�˳��С��
      if(s[i] < MaxC){
        MaxC = s[i];
      }
    }
  }
  printf("%c\n%d", MaxC, MaxNum);
  return 0;
}
