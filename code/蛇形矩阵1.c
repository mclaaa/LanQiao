#include <stdio.h>

//NΪ��������rowsΪ�ڼ��У���ӡ��������
void printN(int N, int rows)
{
    //ȷ����rows�еĵ�һ��Ԫ�ص�ֵ��a(n) = a(n-1) + n - 1; a1 = 1;
    int first = 1;
    int i;
    for (i = 1; i <= rows; i++)
    {
        first += i - 1;
    }

    //��rows�еĵ�һ��Ԫ��Ϊfirst
    int tmp = first;
    //��rows�е�Ԫ��֮�������inc��rows+1��ʼ
    int inc = rows + 1;
    for (i = 1; i <= N - rows + 1; i++) //�����rows�е�Ԫ�أ�����N-rows+1��
    {
        //���Ԫ��ʱ���������һ��Ԫ�غ���û�пո��
        if (i < (N - rows + 1))
            printf("%d ", tmp);
        else
            printf("%d", tmp);

        tmp += inc; //ÿһ��Ԫ�ض���ǰһ��Ԫ�ؼ���inc
        inc++;      //inc++
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    //���N������
    int i;
    for (i = 1; i <= N; i++)
    {
        printN(N, i);
        printf("\n");
    }

    return 0;
}
