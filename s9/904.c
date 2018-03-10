#include <stdio.h>

double xiejunzhi (double, double);//xiejunzhi: 谐均值

int main (void)
{
	double x, y;

	printf ("请输入两个数以计算谐均值");
	scanf ("%lf %lf", &x, &y);
	printf ("%lf 与 %lf 的谐均值为%lf\n", x, y, xiejunzhi (x, y));

	return 0;
}

double xiejunzhi (double i, double j)
{
	double result;
	
	result = 1 / ((1 / i + 1 / j) / 2);

	return result;
}
