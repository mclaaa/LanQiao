/*ʵ��һ�������������ʼΪ�գ�֧�����ֲ�����

������ͷ����һ������
ɾ���� k ������������������
�ڵ� k ��������������һ������
����Ҫ�Ը�������� M �β��������������в����󣬴�ͷ��β�����������
�����ʽ
��һ�а�������M����ʾ����������

������M�У�ÿ�а���һ��������������������Ϊ���¼��֣�

(1) ��H x������ʾ������ͷ����һ����x��

(2) ��D k������ʾɾ����k��������������������kΪ0ʱ����ʾɾ��ͷ��㣩��

(3) ��I k x������ʾ�ڵ�k����������������һ����x���˲�����k������0����

�����ʽ
��һ�У������������ͷ��β�����
����������
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
���������
6 4 6 5
1��M��100000
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
