#include <stdio.h>
int main ()
{
    int a,N,b,j,k,i;
    scanf("%d",&N);
    char ch[40];
    for(i=0;i<40;i++)
    ch[i]=' ';
    while(N--)
    {
        scanf("%d %d",&a,&b);
        for(i=0;i<b;i++)
        {
            for(k=0;k<a-1;k++)
            {
                ch[k]=ch[a-k-1]='X';
                for(j=0;j<a;j++)
                    printf("%c",ch[j]);
                printf("\n");
                ch[k]=ch[a-k-1]=' ';
            }
        }
        ch[0]=ch[a-1]='X';
        for(j=0;j<a;j++)
            printf("%c",ch[j]);
            printf("\n\n");
            ch[k]=ch[a-k-1]=' ';
    }

    return 0;
}
