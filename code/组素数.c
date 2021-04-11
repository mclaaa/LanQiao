/*
素数就是不能再进行等分的数。比如：2 3 5 7 11等。 9 = 3 * 3 说明它可以3等分，因而不是素数。

我们国家在 1949年建国。如果只给你 1 9 4 9 这 44 个数字卡片，可以随意摆放它们的先后顺序（但卡片不能倒着摆放啊，我们不是在脑筋急转弯！），那么，你能组成多少个 44 位的素数呢？

比如：1949，4919 都符合要求。

请你输出能组成的 44 位素数的个数，不要罗列这些素数!!*/
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
  int i;
  for(i=2;i*i<=num;i++)
  {
    if(num%i==0)
    {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int j;
  int sum =0;
  int s[9]={1949,1499,9149,9419,4199,4919,9941,4991,9491};
  for(j=0;j<9;j++)
  {
    if(isPrime(s[j]))
    {
      sum = sum+1;
    }
  }
  printf("%d\n",sum);
  return 0;
}
