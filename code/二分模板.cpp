#include<iostream>
using namespace std;
const int N=1e5+10;
int q[N];
int main()
{
    int l=0,r,x;
    cin>>l>>x>>r;
    while(l<r)
    {
        int mid=l+r>>1;//模板1从左到右
        if(q[mid]<x) l=mid+1;
        else r=mid;
    }
    while(l<r)//模板2 从右到左；
       {

       int mid=l+r+1>>1;
        if (q[mid]>x) r=mid-1;
        else l=mid;
}
}
