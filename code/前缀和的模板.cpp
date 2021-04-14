#include <iostream>
using namespace std;
const int N=1e5+10;
int a[N],s[N];

    int f(int l,int r){
    if(l>r) return 0;
    if (l==r) return a[1];
    return s[r]-s[l];
    }
int main()
    {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    for (int i=1;i<=n;i++)
        cout <<s[i]-s[i-1]<<' ';
    return 0;
    }
