#include <stdio.h>
#include <math.h>

double out(double a, double b);

int main(void)
{
        double a, b;
        printf("please enter two numbers:\n");
        while(scanf("%lf %lf", &a, &b) == 2)
        {
                printf("the out is %lf\n", out(a, b));
                printf("enter the next two numbers:(q to quit)\n");
        }

        return 0;
}

double out(double a, double b)
{
        double n;
        n = fabs(a - b) / (a * b);

        return n;
}
