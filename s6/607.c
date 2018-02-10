#include <stdio.h>
#include <math.h>

int main(void)
{
        double a, b;
        printf("please enter two numbers:\n");
        while(scanf("%lf %lf", &a, &b) == 2)
        {
                double n = fabs(a - b) / (a * b);
                printf("the out is %lf.\n", n);
                printf("enter next two numbers:(q to quit):\n");
        }

        return 0;
}
