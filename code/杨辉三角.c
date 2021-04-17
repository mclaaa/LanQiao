#define M 10
#include <stdio.h>
int main ( )
{
    int a[M][M];
    for(int i=0;i<M;i++)
    {
            a[i][0]=1;
            a[i][i]=1;
    }
    for(int i=2;i<M;i++)
    {
        for(int j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<=i;j++)

            printf("%6d",a[i][j]);
            printf("\n");
    }
    return 0;
}
