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
        int mid=l+r>>1;//ģ��1������
        if(q[mid]<x) l=mid+1;
        else r=mid;
    }
    while(l<r)//ģ��2 ���ҵ���
       {

       int mid=l+r+1>>1;
        if (q[mid]>x) r=mid-1;
        else l=mid;
}
}
