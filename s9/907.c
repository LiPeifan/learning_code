#include <stdio.h>
double power (double, int);
int main (void)
{
	double x;
	int exp;

	printf ("这是一个计算输入数字的整数幂的程序。\n");
	printf ("请依次输入底数和指数。\n");
	printf ("输入任意字母退出。\n");
	while (scanf ("%lf %d", &x, &exp) == 2){
		printf ("%.2lf 的 %d 次幂等于 %lf.\n", x, exp, power (x, exp));
		printf ("输入新的一组数字：\n");
	}
	printf ("感谢使用。\n");

	return 0;
}

double power (double x, int exp)
{
	int n;
	double result = 1;
	if (exp > 0)
		for (n = 1; n <= exp; n++)
			result *= x;
	else if (exp < 0){
		for (n = -1; n >= exp; n--)
			result *= x;
		result = 1 / result;
	}
	else
		result = 1;

	return result;
}
