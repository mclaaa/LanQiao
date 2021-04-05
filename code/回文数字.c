#include <stdio.h>
int main()
{
    int a, b ,c ,n, flag=1;
    scanf("%d",&n);
    for(a=1;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                if(2*a+2*b+c==n)
                   {
                   flag=0;
                        printf("%d%d%d%d%d\n",a,b,c,b,a);}
            }
        }
    }
    for(a=1;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                if(2*a+2*b+2*c==n){
                    printf("%d%d%d%d%d%d\n",a,b,c,c,b,a);
                    flag=0;
                }
            }
        }
    }

    if(flag)
    printf("-1");
    return 0;
}
