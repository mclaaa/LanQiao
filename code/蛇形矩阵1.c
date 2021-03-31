#include <stdio.h>

//N为总行数，rows为第几行，打印该行数据
void printN(int N, int rows)
{
    //确定第rows行的第一个元素的值：a(n) = a(n-1) + n - 1; a1 = 1;
    int first = 1;
    int i;
    for (i = 1; i <= rows; i++)
    {
        first += i - 1;
    }

    //第rows行的第一个元素为first
    int tmp = first;
    //第rows行的元素之间的增量inc从rows+1开始
    int inc = rows + 1;
    for (i = 1; i <= N - rows + 1; i++) //输出第rows行的元素，共有N-rows+1个
    {
        //输出元素时，该行最后一个元素后面没有空格符
        if (i < (N - rows + 1))
            printf("%d ", tmp);
        else
            printf("%d", tmp);

        tmp += inc; //每一个元素都是前一个元素加上inc
        inc++;      //inc++
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    //输出N行数据
    int i;
    for (i = 1; i <= N; i++)
    {
        printN(N, i);
        printf("\n");
    }

    return 0;
}
