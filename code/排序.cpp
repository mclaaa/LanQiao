//ÅÅĞòÄ£°å

#include <iostream>
#include <cstdio>
using namespace std ;
int q[10000],n;
void quick_sort(int l,int r)
{
if (l<=r) return ;
int x =q[l+r>>1],i=l-1,j=r+1;
while (i<j)
{
    do i++;while (q[i]<x);
    do j--;while (q[j]>x);
    if(i<j)swap (q[i],q[j]);
    }
quick_sort(1,j);
quick_sort(j+1,r);
}

