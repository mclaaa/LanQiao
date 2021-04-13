/*实现一个单链表，链表初始为空，支持三种操作：

向链表头插入一个数；
删除第 k 个插入的数后面的数；
在第 k 个插入的数后插入一个数。
现在要对该链表进行 M 次操作，进行完所有操作后，从头到尾输出整个链表。
输入格式
第一行包含整数M，表示操作次数。

接下来M行，每行包含一个操作命令，操作命令可能为以下几种：

(1) “H x”，表示向链表头插入一个数x。

(2) “D k”，表示删除第k个输入的数后面的数（当k为0时，表示删除头结点）。

(3) “I k x”，表示在第k个输入的数后面插入一个数x（此操作中k均大于0）。

输出格式
共一行，将整个链表从头到尾输出。
输入样例：
10
H 9
I 1 1
D 1
D 0
H 6
I 3 6
I 4 5
I 4 5
I 3 4
D 6
输出样例：
6 4 6 5
1≤M≤100000
*/

#include<iostream>
using namespace std;
const int N=100010;
int idx,head,n[N],ne[N];
int a;
void add_head(int x){
    n[idx]=x;
    ne[idx]=head;
    head=idx++;
}
void add(int k,int x){
    n[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx++;
}
void remove(int k){
    ne[k]=ne[ne[k]];
}

int main(){

    head=-1;idx=0;
    cin>>a;
    while(a--){
        string op;
        int k,x;
        cin>>op;
        if(op=="D")
        {

            cin>>k;
            if(!k)head=ne[head];
            remove(k-1);
        }
        else if(op=="H")
        {
            cin>>x;
            add_head(x);
        }
        else if(op=="I"){
            int k,x;
            cin>>k>>x;
            add(k-1,x);
        }
    }
    for(int i=head;i!=-1;i=ne[i])
      cout<<n[i]<<" ";
    return 0;

}
