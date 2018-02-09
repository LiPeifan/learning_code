#include <stdio.h>
#define CM_PER_FEET 30.48
#define CM_PER_INCH 2.54

int main(void)
{
        double cm, inch;
        int feet;
        printf("enter a height in centimeters: ");
        scanf("%lf", &cm);
        while (cm > 0)
        {
                feet = cm / CM_PER_FEET;
                inch = cm / CM_PER_INCH - feet*12;
                printf("%.1lf cm = %d feet, %.1lf inches\n", cm, feet, inch);
                printf("Enter a height in centermeters (<=0 to quit): ");
                scanf("%lf", &cm);
        }

        return 0;
}
