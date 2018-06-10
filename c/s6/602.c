#include <stdio.h>

int main(void)
{
        char ch = '$';
        int a, b;
        for(a = 1; a <= 5; a++)
        {
                for(b = 6 - a; b <= 5; b++)
                        printf("%c", ch);
                printf("\n");
        }

        return 0;
}
