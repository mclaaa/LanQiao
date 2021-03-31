/*
样例输入
5

样例输出
1 3 6 10 15
2 5 9 14
4 8 13
7 12
11


*/

#include <stdio.h>

int main()	// 蛇行矩阵
{

	int N;
	scanf("%d", &N);
	int i, j, down = 1, right;
	for(i = 0; i < N; i++)
        {
		down += i;
		right = down;
		printf("%d ", down);
		for(j = i+1; j < N; j++)
		{
			right = right + j+1;
			printf("%d",right);
			if(j!=N-1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}
