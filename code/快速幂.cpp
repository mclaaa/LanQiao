#include <iostream>
using namespace std;
f(int a,int b,int p)
{
    int res=1;
    while(b){
        if(b&1) res=(long long )res *a%p;
        b>>=1;
        a=(long long )a*a%p;
        return res ;

    }


}
int main()
{
    int a,b ,p;
    int n;
    cin >>n;
    while(n--)
    {
        cin>>a>>b>>p;
        cout<<f(a,b,p)<<endl;
    }
}
