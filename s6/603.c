#include <stdio.h>

int main(void)
{
        //char ch = 'F';
        int n, m;

        for(n = 1; n <= 6; n++){
                char ch = 'F';
                for(m = 1; m <= n; m++, ch -= 1)
                        printf("%c", ch);
                printf("\n");
        }

        return 0;
}
