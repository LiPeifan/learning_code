# include<stdio.h>
# include<float.h>

int main(void)
{
        double a = 1.0/3.0;
        float b = 1.0/3.0;

        printf("%.4lf %.12lf %.16lf\n", a, a, a);
        printf("%.4f %.12f %.16f\n", b, b, b);
        printf("%d %d\n", FLT_DIG, DBL_DIG);

        return 0;
}
