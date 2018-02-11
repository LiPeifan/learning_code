#include <stdio.h>

int main(void)
{
        char m, st[255];
        int n;
        n = 0;
        printf("please input: \n");
        scanf("%c", &m);
        while(m != '\n')
        {
                st[n] = m;
                n++;
                scanf("%c", &m);
        }
        n--;
        for(; n >= 0; n--)
                printf("%c", st[n]);
        printf("\n");

        return 0;
}
