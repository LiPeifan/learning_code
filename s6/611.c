#include <stdio.h>

int main(void)
{
        int limit;
        int k = -1;
        double sum1, sum2, n, m;
        printf("please enter the limit: ");
        scanf("%d", &limit);
        for(n = 1, sum1 = 0; n <= limit; n++)
                sum1 += 1.0 / n;
        for(m = 1, sum2 = 0; m <= limit; m++)
        {
                k *= -1;
                sum2 += k * 1.0 / m;
        }
        printf("sum1 = %lf sum2 = %lf\n", sum1, sum2);

        return 0;
}
