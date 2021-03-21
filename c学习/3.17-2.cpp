
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int n,ch[10001],i,a=0,b=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {scanf("%d",&ch[i]);
  if(ch[i]>=60)
  a++;
  if(ch[i]>=85)
  b++;
  }
  printf("%.0f%%\n",(a*100)/(n*1.0));
   printf("%.0f%%\n",(b*100)/(n*1.0));
  return 0;
}
