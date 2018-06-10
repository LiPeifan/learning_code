#include <stdio.h>
#include <ctype.h>

int is_alpha (char);

int main (void)
{
	char ch;
	printf ("这是一段检测所输入的文字是否为字母的程序。\n");
	printf ("请输入一段文字。以Ctrl加D结束。\n");
	while ((ch = getchar ()) != EOF)
		if (is_alpha (ch) != -1)
			printf ("%c是字母，在字母表的位置为%d.\n", ch, is_alpha (ch));

	return 0;
}

int is_alpha (char ch)
{
	int n;
	if (isalpha (ch)){
		if (islower (ch))
			n = ch - 'a' + 1;
		else
			n = ch - 'A' + 1;
	}
	else
		n = -1;
	return n;
}
