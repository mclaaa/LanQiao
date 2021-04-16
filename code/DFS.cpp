/*枚举1 2 3全排列*/


#include<iostream>
using namespace std;
int q[3];
bool st[4];

 void dfs(int u )
{
    if(u==3){//判断是否结束
        for(int i=0;i<=2;i++)
    {
        cout<<q[i]<<' ';
    }
    cout <<endl;
    return ;
    }
    for(int i=1;i<=3;i++){//枚举所有可能情况
        if(st[i]) continue;//判断当前情况是否合法

        st[i]=true ;
        q[u]=i;
        dfs(u+1);

        st[i]=false;//回溯 恢复现场
    }
}
int main()
{
    dfs(0);
    return 0;
}
