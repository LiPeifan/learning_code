#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
        printf ("请输入一段字母。\n");
        get_first();

        return 0;
}

char get_first(void)
{
        char ch;
        while ((ch = getchar()) != '\n'){
                if (isspace(ch))
                        continue;
                else{
                        putchar(ch);
                        while ((ch = getchar()) != '\n')
                                continue;
                }
        }

        return ch;
}
