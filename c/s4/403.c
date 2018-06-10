# include<stdio.h>

int main(void)
{
        double num;

        printf("please enter a number:");
        scanf("%lf", &num);
        printf("a. The input is %.1lf or %.1e\n", num, num);
        printf("b. The input is %+.3lf or %.3e\n", num, num);

        return 0;
}
