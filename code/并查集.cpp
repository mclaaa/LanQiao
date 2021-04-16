#include <iostream>
#include<cstdio>
using namespace std;
const int N=1e5+10;
int n,m,p[N];
int find(int x)
{
    if(p[x]!=x)p[x]=find(p[x]);
    return p[x];
}
int main()
{
    scanf("%d%d",&n,&m);
    while(m--)
    {
        int a,b;
     char op[2];
        scanf("%s%d%d",op,&a,&b);
        if(op[0]=='M'){
            p[find(a)]=find (b);
        cout<<"yse"<<endl;}
        else
        {
          if(find(a)==find(b))
            cout<<"no"<<endl;
    }

}
}
