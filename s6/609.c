#include <stdio.h>

int main(void)
{
        int min, max;
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &min, &max);
        while(min < max)
        {
                int sum = 0;
                double n = min;
                while(n <= max)
                {
                        sum += n * n;
                        n++;
                }
                printf("The sums of the squares from %d to %d is %d.\n", min * mm
in, max * max, sum);
                printf("Enter next set of limits:");
                scanf("%d %d", &min, &max);
        }
        printf("done.\n");

        return 0;
}
