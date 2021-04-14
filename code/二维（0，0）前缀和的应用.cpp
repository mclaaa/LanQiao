/*∂˛Œ¨
Acwing Ã‚∫≈99º§π‚’®µØ


*/
#include <iostream>
using namespace std;
const int N=5000+10;
int f[N][N];
int main ()
{
    int n ,r;
    cin >>n>>r;
    while (n--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        f[x+1][y+1]+=w;
            }
    for(int i=1;i<N;i++)
        for (int j=1;i<N;j++)
        f[i][j]=f[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];

    int res =0;
    if (r>=N)
        res=f[N-1][N-1];
    for(int i=r;i<N;i++)
        for (int j=r;j<N;j++)
        res=max(res,f[i][j]-f[i-r][j]-f[i][j-r]+f[i-r][j-r]);
    cout<<res;
    return 0;
    }
