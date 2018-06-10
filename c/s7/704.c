#include <stdio.h>

int main(void)
{
        char ch;
        int count = 0;

        while ((ch = getchar ()) != '#'){
                if (ch == '.'){
                        ch = '!';
                        count++;
                }
                else if (ch == '!'){
                        putchar (ch);
                        count++;
                }
                else if (ch == '\n')
                        continue;
                putchar (ch);
        }
        printf ("进行了%d次的替换.\n", count);

        return 0;
}
