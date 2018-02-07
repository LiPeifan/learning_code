#include <stdio.h>

int main(void)
{
        double water, molecule;
        printf("please enter the quarter of the warter:");//i don't know the word of 夸脱
        scanf("%lf", &water);
        molecule = (water*950)/(3e-23);
        printf("there are %le in %lf quarter of warter\n", molecule, water);

        return 0;
}
