#include <stdio.h>

int main(void)
{
        double n[8], m[8];
        int k;
        printf("please enter 8 numbers: \n");
        for(k = 0; k < 8; k++)
        {
                printf("n[%d] : ", k);
                scanf("%lf", &n[k]);
        }
        m[0] = n[0];
        for(k = 1; k < 8; k++)
        {
                m[k] = m[k - 1] + n[k];
        }
        for(k = 0; k < 8; k++)
                printf("%lf\t", n[k]);
        printf("\n");
        for(k = 0; k < 8; k++)
                printf("%lf\t", m[k]);
        printf("\n");

        return 0;
}
