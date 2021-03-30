#include<stdio.h>
int main()
{
  int begin,end,i,j,cout,q,temp,flag=0;
  while(scanf("%d%d",&begin,&end)!=EOF)
  {
      if(begin>end)          //begin与end比较大小
      {
          temp=begin;
          begin=end;
          end=temp;
          flag=1;            //如果开始大于结束，置标记为1
      }
      q=0;                //每次开始使得q=0
      for(i=begin;i<=end;i++)
      {
          cout=0;
          j=i;            //j中存放当前的i
          while(j!=1)
          {
              if(j&1)        //判断奇偶
                  j=j*3+1;
              else
                  j=j/2;
              cout++;        //步骤+1
          }
          if(q<cout)
              q=cout;
      }
      if(flag==1)
          printf("%d %d %d\n",end,begin,q+1);
      else
          printf("%d %d %d\n",begin,end,q+1);
  }
  return 0;
}
