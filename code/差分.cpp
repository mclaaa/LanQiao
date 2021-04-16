/*差分*/
#include <iostream>
using namespace std;
const int N=1e5+10;
int b[N];
void f(int l,int r,int c)
{
    b[l]+=c;
    b[r+1]-=c;
}
int main()
{

int n,m;
cin>>m>>n;
for (int=i;i<=n;i++)
{
    int c;
    cin>>c;
    f(i,i,c);
}
while(m--)
{
    int l,r,c;
    cin>>l>>r>>c;
    f(l,r,c);
}
for(int i=1;i<=n;i++)
{
    b[i]+=b[i-1];
    cout <<b[i]<<' ';
}
return 0;
}
