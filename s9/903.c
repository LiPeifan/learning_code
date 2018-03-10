#include <stdio.h>

void putch (char, int, int);

int main (void)
{
	char ch;
	int i, j;

	printf ("请输入所要打印的字符：");
	ch = getchar();
	scanf ("%*s");
	printf ("请输入每行打印的个数：");
	scanf ("%d", &i);
	printf ("请输入所要打印的行数：");
	scanf ("%d", &j);

	putch (ch, i, j);

	return 0;
}

void putch (char ch, int i, int j)
{
	int x, y;
	for (x = 1; x <= j; x++){
		for (y = 1; y <= i; y++)
			putchar (ch);
		putchar ('\n');
	}
}
