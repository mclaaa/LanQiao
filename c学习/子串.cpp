#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000000];
  gets(a);
  int n,sum;
  n=strlen(a);
  sum=(n*(n+1))/2+1+n;
  printf("%d",sum);
  return 0;
}
