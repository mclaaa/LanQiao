#include<stdio.h>
 
int main()
{
 int a[100],i=0;
 
while((scanf("%d",&a[i]))!=EOF)
{
 
   i++;
 
}
 
for(int j=0;j<i;j++)
  printf("%c",a[j]);
 
return 0;
}

/*72 101 108 108 111 44
32  119 111 114 108 100 33
^Z
Hello, world!
*/
