#include<stdio.h>

int main()

{

//素数就是除一和本身外没有其他的数能与它本身整除 

    int i,j,n,count;//count用来记录可以和i整除的数 

    scanf("%d",&n);

    for(i=2;i<=n;i++)

    {

    count=0;//注意每次都要重新赋零值，不然后面判定就错了 

    for(j=2;j<i;j++)

    {

    if(i%j==0) count++;//如果i是素数的话count应该是零的 

    }

if(count==0) printf("%d\n",i);//如果是素数就输出了记得要加换行符 

	}

    return 0;

}


