#include <stdio.h>

int main(void)
{
        int n[8];
        int m, k;
        n[0] = 2;
        k = 0;
        for(m = 1; m < 8; m++)
                n[m] = n[m - 1] * 2;
        do{
                printf("%d\t", n[k]);
                k++;
        }while(k < 8);
        printf("\n");

        return 0;
}
