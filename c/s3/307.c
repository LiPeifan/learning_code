include <stdio.h>

int main(void)
{
        double heigh;

        printf("please enter your heigh(in center meter):");
        scanf("%lf", &heigh);
        printf("your heigh in inch is %lf inch.\n", heigh/2.54);

        return 0;
}
