#include<stdio.h>

#include<math.h>

int function1(int bits,int a,int b,int y)

{

int sum=0;

int i;

if(bits==2)

{

if(a<y-1)

sum=y-a-1;

}

if(bits>2)

{

bits--;

for(i=b;i<y-1;i++)

sum+=function1(bits,i,i+1,y);

}

return sum;

}

int main()

{

int w,k;

int n;//��¼w�ֳܷɼ���k

int m;//��¼�����Ϊ����

int q;//��ʾ��������

int i;

int mm;//mm��ʾ����λ��nλ�ĸ���λ�����

int hh,ih;//��ʾmm=nʱ���λ�ı仯��Χ

int sum=0;

scanf("%d %d",&k,&w);

q=pow(2,k);

if(w/k==0)//�ж�����м�λ

n=w/k;

else

{

m=w%k;

n=w/k+1;

}

if(m==1)

ih=hh=1;

if(m>1)

{

ih=pow(2,m-1);

hh=pow(2,m)-1;

}

if(m==0)

{

ih = pow(2,k-1);

hh = q-1;

}

for(mm=2;mm<=n;mm++)

{

if(mm<n)

for(i=1;i<q-mm+1;i++)

sum+=function1(mm,i,i+1,q);

if(mm==n)

for(i=ih;i<=hh;i++)

sum+=function1(mm,i,i+1,q);

}

printf("%d",sum);

return 0;

}
