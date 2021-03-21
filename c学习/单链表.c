# include <iostream>
using namespace std;
int e[N],en[N],idx,h;
void init ()
{   h=-1;
    idx=0;
}
void insert(int n)
{
    e[idx]=n;
    en[idx]=h;
    h=idx++;
}
void remove(int n)//删除n后一个节点
{
    ne[n]=ne[ne[n]];
}
void add_n(int n,int x)
{
    e[idx]=x;
    ne[idx]=ne[n];
    ne[n]=ide++;
}
void main ( )
{
    return 0;
}
