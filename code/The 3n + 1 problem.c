#include<stdio.h>
int main()
{
  int begin,end,i,j,cout,q,temp,flag=0;
  while(scanf("%d%d",&begin,&end)!=EOF)
  {
      if(begin>end)          //begin��end�Ƚϴ�С
      {
          temp=begin;
          begin=end;
          end=temp;
          flag=1;            //�����ʼ���ڽ������ñ��Ϊ1
      }
      q=0;                //ÿ�ο�ʼʹ��q=0
      for(i=begin;i<=end;i++)
      {
          cout=0;
          j=i;            //j�д�ŵ�ǰ��i
          while(j!=1)
          {
              if(j&1)        //�ж���ż
                  j=j*3+1;
              else
                  j=j/2;
              cout++;        //����+1
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
