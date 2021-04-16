#include <iostream >
using namespace std;
const int N =5000+10;
int f[N][N];
int main ()
{
    int n,r;
    cin >>n>>r;
    while (n--)//绘制地图
    {
        int x,y,w;
        cin>>y>>x>>w;
        f[x+1][y+1]+=w;

    }
//求地图内最大宝物
        for (int i=1;i<N;i++)
            for (int j=1;j<N;j++)
            f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+f[i][j];
            int res=0;
            if(r>=N) res=f[N][N-1];
            for(int i=r;i<N;i++)
                for(int j=r;j<N;j++)
                res=max(res,f[i-r][j]+f[i][j-r]-f[i-r][j-r]+f[i][j]);
                cout<<res;
        return 0;
}
