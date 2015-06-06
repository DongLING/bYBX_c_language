/*-----------------------------------------------------
   程序L7_7.C功能：已知一个一维数组a[11]中有10个数，求出
   其中前n个数的和。其中n由键盘输入。
 ----------------------------------------------------*/  

#include <stdio.h>

int sum(int array[], int n) 
{
	int i, s = 0;
	for (i = 0; i < n; i++)
		s += array[i];
	return s;
}

int main() 
{
	int num, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	scanf("%d", &num);
	printf("%d\n", sum(a, num));

	return 0;
}
