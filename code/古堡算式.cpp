/*
福尔摩斯到某古堡探险，看到门上写着一个奇怪的算式：

ABCDE ∗ ?=EDCBA
他对华生说：“ABCDE 应该代表不同的数字，问号也代表某个数字！”

华生：“我猜也是！”

于是，两人沉默了好久，还是没有算出合适的结果来。

请你利用计算机的优势，找到破解的答案。

把 ABCDE 所代表的数字写出来。

*/


#include <iostream>
using namespace std ;
int main ()
{
    for(int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){
            if(i==j)
            {
                continue;
            }
            for(int k=0;k<=9;k++){
                if(k==j||k==i){
                    continue;
                }
                for (int m=0;m<=9;m++){
                    if(m==i||m==j||m==k){
                        continue;
                    }
                    for (int n=0;n<=9;n++){
                        if(n==i||n==j||n==k||n==m)
                        {
                            continue;
                        }
                    int temp=i*10000+j*1000+k*100+m*10+n;
                    for (int p=2;p<=9;p++){
                        if(temp*p==n*10000+m*1000+k*100+j*10+i){
                       cout<<temp;
                          return 0;
                        }
                    }
                }
            }
        }
    }
}}
