#include <stdio.h>

void Fibonacci (int);

int main (void)
{
	int n;
	printf ("请输入所要求到斐波拉契数列的位数：");
	while (scanf ("%d", &n) == 1){
		printf ("到第%d位的斐波拉契数列为：\n", n);
		Fibonacci (n);
		printf ("\n输入下一个数字以继续或任意字母退出:\n");
	}
	printf ("感谢使用。\n");

	return 0;
}

void Fibonacci (int n)
{
	int m;
	int num1, num2, num3;
	num1 = num2 = 1;
	for (m = 1; m <= n; m++){
		if (m == 1 || m == 2)
			printf ("1	");
		else{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			printf ("%d	", num3);
		}
	}
}
