#include <stdio.h>
#include <ctype.h>

int main(void)
{
        char ch;
        int countupper, countlower;
        countupper = countlower = 0;

        while ((ch = getchar()) != EOF){
                if (islower(ch))
                        countlower++;
                else if (isupper(ch))
                        countupper++;
        }
        printf ("大写字母个数为%d, 小写字母个数为%d.\n", countupper, countlower);

        return 0;
}
