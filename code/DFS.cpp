/*ö��1 2 3ȫ����*/


#include<iostream>
using namespace std;
int q[3];
bool st[4];

 void dfs(int u )
{
    if(u==3){//�ж��Ƿ����
        for(int i=0;i<=2;i++)
    {
        cout<<q[i]<<' ';
    }
    cout <<endl;
    return ;
    }
    for(int i=1;i<=3;i++){//ö�����п������
        if(st[i]) continue;//�жϵ�ǰ����Ƿ�Ϸ�

        st[i]=true ;
        q[u]=i;
        dfs(u+1);

        st[i]=false;//���� �ָ��ֳ�
    }
}
int main()
{
    dfs(0);
    return 0;
}
