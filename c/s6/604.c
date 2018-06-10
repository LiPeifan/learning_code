#include <stdio.h>

int main(void)
{
        int n;
        for(n = 1; n <=5; n++)
        {
                for(int m = n; m <= 4; m++)
                        printf(" ");//print a blank
                char ch;
                int a;
                for(ch = 'A', a = 1; a <= n; a++, ch++)
                        printf("%c", ch);
                ch--;
                for(;a > 2; a--)
                {
                        printf("%c", --ch);
                }
                printf("\n");
        }

        return 0;
}
