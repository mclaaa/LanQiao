#include<stdio.h>

int main()

{

//�������ǳ�һ�ͱ�����û������������������������ 

    int i,j,n,count;//count������¼���Ժ�i�������� 

    scanf("%d",&n);

    for(i=2;i<=n;i++)

    {

    count=0;//ע��ÿ�ζ�Ҫ���¸���ֵ����Ȼ�����ж��ʹ��� 

    for(j=2;j<i;j++)

    {

    if(i%j==0) count++;//���i�������Ļ�countӦ������� 

    }

if(count==0) printf("%d\n",i);//���������������˼ǵ�Ҫ�ӻ��з� 

	}

    return 0;

}


