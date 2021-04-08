#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int b[8],i,n,t,d;
  scanf("%d",&n);
  t=n;
  d=n;
  for(;;t++)
   {
     n=t+1;
     for(i=0;i<8;n=n/10)
     {
       b[i]=n%10;
       i++;
       }
     if(b[0]==b[7]&&b[1]==b[6]&&b[2]==b[5]&&b[3]==b[4]&&b[5]!=0
     &&b[3]<=1&&b[6]<=2)
     {
       printf("%d\n",t+1);
       break;
     }}
  for(;;d++)
  {
    n=d+1;
    for(i=0;i<8;n=n/10)
    {
     b[i]=n%10;
     i++;
    }
    if((b[0]==b[2]&&b[0]==b[5]&&b[0]==b[7])&&(b[1]==b[3]
    &&b[1]==b[4]&&b[1]==b[6]&&b[1]<=1))
    {
      printf("%d",d+1);
      break;
    }}
  return 0;
}
