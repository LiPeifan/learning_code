#include <stdio.h>

void chline (char, int, int);

int main(void)
{
	char ch;
	int i, j;

	printf ("请输入所要打印的字符：");
	ch = getchar ();
	printf ("请输入要在哪两列之间输出：\n");
	printf ("开始列：");
	scanf ("%d", &i);
	printf ("请输入结尾列：");
	scanf ("%d", &j);
	chline (ch, i, j);

	return 0;
}

void chline (char ch, int i, int j)
{
	int n;
	for (n = 1; n <= j; n++){
		if (n <= i)
			putchar (' ');
		else
			putchar (ch);
	}
	putchar ('\n');
}
