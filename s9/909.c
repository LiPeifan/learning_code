#include <stdio.h>
void to_base_n (unsigned long, unsigned int);

int main (void)
{
	unsigned long number;
	unsigned int system;
	printf ("这是一个将十进制数字转化为任意进制的程序。\n");
	printf ("请依次输入十进制整数和想要转化的进制：(输入任意字母退出)\n");
	while (scanf ("%lu %u", &number, &system) == 2){
		printf ("%lu 以 %u进制表示为：", number, system);
		to_base_n (number, system);
		printf ("\n请输入下一对数字。输入任意字母退出。\n");
	}
	printf ("感谢使用。\n");

	return 0;
}

void to_base_n (unsigned long number, unsigned int system)
{
	int r;
	r = number % system;
	if (number >= system)
		to_base_n (number / system, system);
	putchar ('0' + r);
}
