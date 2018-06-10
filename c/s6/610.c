#include <stdio.h>

int main(void)
{
        int num[8];
        int n;
        printf("enter 8 integers: ");
        for(n = 0; n <= 7; n++)
        {
                scanf("%d", &num[n]);
        }
        n--;
        while(n >= 0)
        {
                printf("%d\t", num[n]);
                n--;
        }
        printf("\n");

        return 0;
}
